![VisionARy Logo](./VisionARy%20Logo.png)
# VisionARy: ASU InnovationSpace AR Experience

VisionARy was conceived as a groundbreaking AR experience for iOS during the Devil's Invent Hackathon at Arizona State University. Crafted by a team of enthusiastic developers, we embarked on a mission to redefine immersive learning and community building. Through VisionARy, we aim to foster a community and promote ASU's InnovationSpace by offering users an interactive AR tour of specific buildings within the ASU campus, delineating their unique features and inviting them to be a part of the innovative ecosystem at the InnovationSpace.

## Team Members

- [Mehul Srivastava](https://www.linkedin.com/in/msrivas7/)
- Neha Balmurugan
- Tushar Tyagi

## Features

- **QR Code Scan Entry**: Users initiate the experience by scanning a QR code.
- **ARKit Image Tracking**: Utilizes ARKit image tracking to identify unique tracked images, facilitating the display of building-specific content.
- **Interactive AR Tour**: Offers users an informative AR tour, enhancing their knowledge about the distinct features of each building.
- **Scalable Content**: The system supports seamless integration of new content, making it adaptable for future expansions.
- **Community Engagement**: Encourages users to join the InnovationSpace community, fostering connections and building a robust mailing list.

## Technical Specifications

### Technologies Used

- **Unity**: The project is built on the Unity platform, leveraging its capabilities to craft an immersive AR experience.
- **ARKit**: Employs ARKit for image tracking and AR functionalities.
- **iOS**: Designed for iOS, providing a smooth user experience on Apple devices.

### System Architecture

Detailed below is the system's technical pathway, delineating the journey from the initiation to the end, focusing on the technical advancements and user engagement it offers:

1. **QR Code Scan**: The journey begins with a simple QR code scan that leads users to the AR space.
2. **ARKit Image Tracking**: Our algorithm works behind the scenes, identifying unique tracked images to showcase specialized content.
3. **Interactive AR Tour**: As users navigate, they are treated to an engaging AR tour with rich content about each building.
4. **Community Building**: Towards the end, users are prompted to input their email, a step towards building a community around InnovationSpace.

## Getting Started

### Prerequisites

Ensure to have the following prerequisites ready:

- **Unity Hub and Unity Editor** (2022.3.9f1 or later): Download and install from the [Unity official website](https://unity3d.com/get-unity/download).
- **iOS Build Support for Unity**: Available through Unity Hub during the installation process.
- **Xcode** (12.0 or later): Download and install from the [Apple Developer website](https://developer.apple.com/xcode/).
- **ARKit**: Ensure that ARKit is enabled in the Unity project settings under XR Plugin Management.

### Installation

1. **Clone the Repository**: Clone the GitHub repository to your local system.
2. **Open the Project in Unity**: Launch Unity Hub and open the project by locating the project folder.
3. **iOS Build Settings**: Navigate to `File > Build Settings` and select `iOS` as the target platform. Ensure that you have iOS Build Support installed.
4. **ARKit Setup**: In Unity, go to `Edit > Project Settings > XR Plugin Management` and ensure ARKit is installed and enabled.
5. **Build and Run**: Click on `Build and Run`. Ensure you have a connected iOS device with the latest iOS version or an iOS version that supports ARKit.
6. **Open in Xcode**: Once the build process is completed, it will automatically open in Xcode.
7. **Run on iOS Device**: In Xcode, select your iOS device from the device list and click on the `Run` button to install and launch the app on your device.

## Acknowledgements

We would like to extend our heartfelt thanks to the mentors and organizers of the Devil's Invent Hackathon at ASU for the opportunity and the learning experience.

