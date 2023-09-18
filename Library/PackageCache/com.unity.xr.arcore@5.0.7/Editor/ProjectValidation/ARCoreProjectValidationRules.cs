using System;
using System.Collections.Generic;
using System.Linq;
using Unity.XR.CoreUtils.Editor;
using UnityEditor.XR.Management;
using UnityEngine.Rendering;
using UnityEngine.XR.ARCore;

namespace UnityEditor.XR.ARCore
{
    static class ARCoreProjectValidationRules
    {
        const string k_ProjectXRPlugInManagement = "Project/XR Plug-in Management";
        const string k_PreferencesExternalTools = "Preferences/External Tools";
        const string k_Catergory = "Google ARCore";
        const string k_GradleVersionUnknown = "cannot be determined";
        static readonly Version k_MinimumGradleVersion = new(5, 6, 4);

        [InitializeOnLoadMethod]
        static void AddARCoreValidationRules()
        {
            // When adding a new validation rule, please remember to add it in the docs also with a user-friendly description
            var androidGlobalRules = new[]
            {
                new BuildValidationRule
                {
                    Category = k_Catergory,
                    Message = $"Google ARCore requires targeting minimum Android 7.0 'Nougat' API level 24 when AR is 'Required' or Android 4.0 'Ice Cream Sandwich' API Level 14 when AR is 'Optional' (currently: {PlayerSettings.Android.minSdkVersion}).",
                    IsRuleEnabled = IsARCorePluginEnabled,
                    CheckPredicate = () =>
                    {
                        var arcoreSettings = ARCoreSettings.GetOrCreateSettings();
                        var minSdkVersion = arcoreSettings.requirement == ARCoreSettings.Requirement.Optional ? 14 : 24;

                        return (int)PlayerSettings.Android.minSdkVersion >= minSdkVersion;
                    },
                    FixItMessage = "Open Project Settings > Player Settings > Android tab and increase the 'Minimum API " +
                        "Level' to 'API Level 24' or greater for AR Required and to 'API Level 14' or greater for AR Optional.",
                    FixIt = () =>
                    {
                        var arcoreSettings = ARCoreSettings.GetOrCreateSettings();
                        var minSdkVersion = arcoreSettings.requirement == ARCoreSettings.Requirement.Optional ? AndroidSdkVersions.AndroidApiLevel22 : AndroidSdkVersions.AndroidApiLevel24;
                        PlayerSettings.Android.minSdkVersion = minSdkVersion;
                    },
                    Error = true
                },
                new BuildValidationRule
                {
                    Category = k_Catergory,
                    Message = "Google ARCore requires OpenGLES3 graphics API.",
                    IsRuleEnabled = IsARCorePluginEnabled,
                    CheckPredicate = () =>
                    {
                        var graphicsApis = PlayerSettings.GetGraphicsAPIs(BuildTarget.Android);
                        return graphicsApis.Length > 0 && graphicsApis[0] == GraphicsDeviceType.OpenGLES3;
                    },
                    FixItMessage = "Open Project Settings > Player Settings > Android tab and disable " +
                                   "'Auto Graphics API'. In the list of 'Graphics APIs', make sure that 'OpenGLES3' is listed" +
                                   " as the first API.",
                    FixIt = () =>
                    {
                        var currentGraphicsApis = PlayerSettings.GetGraphicsAPIs(BuildTarget.Android);
                        GraphicsDeviceType[] correctGraphicsApis;
                        if (currentGraphicsApis.Length == 0)
                        {
                            correctGraphicsApis = new[]
                            {
                                GraphicsDeviceType.OpenGLES3
                            };
                        }
                        else
                        {
                            var graphicApis = new List<GraphicsDeviceType>(currentGraphicsApis.Length);
                            graphicApis.Add(GraphicsDeviceType.OpenGLES3);
                            foreach (var graphicsApi in currentGraphicsApis)
                            {
                                if (graphicsApi != GraphicsDeviceType.OpenGLES3)
                                    graphicApis.Add(graphicsApi);
                            }

                            correctGraphicsApis = graphicApis.ToArray();
                        }

                        PlayerSettings.SetGraphicsAPIs(BuildTarget.Android, correctGraphicsApis);
                    },
                    Error = true
                },
                new BuildValidationRule
                {
                    Category = k_Catergory,
                    Message = "IL2CPP scripting backend and ARM64 architecture is recommended for Google ARCore.",
                    HelpLink = "https://developers.google.com/ar/64bit",
                    IsRuleEnabled = IsARCorePluginEnabled,
                    CheckPredicate = () =>
                    {
                        return PlayerSettings.GetScriptingBackend(BuildTargetGroup.Android) == ScriptingImplementation.IL2CPP
                            && (PlayerSettings.Android.targetArchitectures & AndroidArchitecture.ARM64) != AndroidArchitecture.None;
                    },
                    FixItMessage = "Open Project Settings > Player Settings > Android tab and ensure 'Scripting Backend'" +
                        " is set to 'IL2CPP'. Then under 'Target Architectures' enable 'ARM64'.",
                    FixIt = () =>
                    {
                        PlayerSettings.SetScriptingBackend(BuildTargetGroup.Android, ScriptingImplementation.IL2CPP);
                        PlayerSettings.Android.targetArchitectures |= AndroidArchitecture.ARM64;
                    },
                    Error = false
                },
                new BuildValidationRule
                {
                    Category = k_Catergory,
                    Message = $"Google ARCore requires at least Gradle version {k_MinimumGradleVersion} (currently: {GetGradleVersionString()}).",
                    HelpLink = "https://developers.google.com/ar/develop/unity-arf/android-11-build",
                    IsRuleEnabled = () => IsARCorePluginEnabled() && EditorUserBuildSettings.activeBuildTarget == BuildTarget.Android,
                    CheckPredicate = () =>
                    {
                        var settings = ARCoreSettings.GetOrCreateSettings();
                        if (settings.ignoreGradleVersion)
                            return true;

                        var gradleVersion = GetGradleVersion();
                        return gradleVersion >= k_MinimumGradleVersion;
                    },
                    FixItMessage = $"Open Preferences > External Tools > Gradle and update the path to a Gradle version {k_MinimumGradleVersion} or greater.",
                    FixIt = () =>
                    {
                        SettingsService.OpenUserPreferences(k_PreferencesExternalTools);
                    },
                    Error = true
                }
            };

            var androidARFoundationRules = new[]
            {
                new BuildValidationRule
                {
                    Category = k_Catergory,
                    Message = "Please enable the 'Google ARCore' plug-in in 'XR Plug-in Management'.",
                    CheckPredicate = IsARCorePluginEnabled,
                    FixItMessage = "Open Project Setting > XR Plug-in Management > Android tab and enable `Google ARCore`.",
                    FixIt = () =>
                    {
                        SettingsService.OpenProjectSettings(k_ProjectXRPlugInManagement);
                    },
                    Error = false,
                    FixItAutomatic = false
                },
            };

            BuildValidator.AddRules(BuildTargetGroup.Android, androidGlobalRules);
            BuildValidator.AddRules(BuildTargetGroup.Android, androidARFoundationRules);
        }

        static bool IsARCorePluginEnabled()
        {
            var generalSettings = XRGeneralSettingsPerBuildTarget.XRGeneralSettingsForBuildTarget(
                BuildTargetGroup.Android);
            if (generalSettings == null)
                return false;

            var managerSettings = generalSettings.AssignedSettings;

            return managerSettings != null && managerSettings.activeLoaders.Any(loader => loader is ARCoreLoader);
        }

        static Version GetGradleVersion()
        {
            return Gradle.TryGetVersion(out var gradleVersion, out var _) ? gradleVersion : new Version(0, 0);
        }

        static string GetGradleVersionString()
        {
            var gradleVersion = GetGradleVersion();

            return gradleVersion.Major != 0 ? gradleVersion.ToString() : k_GradleVersionUnknown;
        }
    }
}
