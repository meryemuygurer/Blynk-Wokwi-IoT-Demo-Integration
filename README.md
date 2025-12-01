Blynk–Wokwi LED Control Demo

This project demonstrates how to control an LED using an ESP32, simulated in Wokwi, and connected to the Blynk IoT Cloud.
It is a beginner-friendly example showing how virtual hardware can communicate with a cloud dashboard in real time.

FEATURES:

ESP32 LED control using Blynk Cloud

Fully virtual hardware via Wokwi

Real-time cloud communication

Simple and clean code structure

Ideal for IoT beginners and small demo projects

PROJECT SCREENSHOTS AND VIDEO:

Wokwi Simulation

Blynk Console Dashboard

Demo Video

HOW IT WORKS:

The ESP32 simulation starts in Wokwi.

It connects to Blynk Cloud using your Template ID and Auth Token.

A Button widget on Blynk (V1) sends a digital value to the device.

The LED on pin D2 turns ON/OFF instantly according to the widget state.

Everything runs online — no physical ESP32 required.

PROJECT STRUCTURE
/src               → main firmware (sketch.ino)
/wokwi             → Wokwi simulation files (diagram, libraries)
/images            → screenshots, demo video
README.md          → project documentation

SETUP INSTRUCTIONS
1. Clone the project
git clone https://github.com/yourusername/Blynk-Wokwi-LED-Demo.git

2. Open the Wokwi project

Upload all files inside the /wokwi folder to
https://wokwi.com/

3. Insert your Blynk credentials

Inside sketch.ino, update:

#define BLYNK_TEMPLATE_ID ""
#define BLYNK_TEMPLATE_NAME ""
#define BLYNK_AUTH_TOKEN ""

4. Run the simulation

Press Play and open your device on Blynk Cloud.
LED control will work instantly.

WOKWI FILES INCLUDED:

diagram.json → ESP32 + LED wiring diagram

libraries.txt → required Arduino libraries

wokwi-project.txt → simulation metadata

These ensure your project can be imported to Wokwi without modification.

FUTURE IMPROVEMENTS:

Add more sensor types and widgets.

Implement two-way control between Wokwi and Blynk.

Improve UI layout in both the dashboard and Wokwi schematic.

Add optional data logging or cloud storage.

Provide a simple configuration file for easier setup.
