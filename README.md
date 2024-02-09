# Pressure Gauge Chip for Wokwi

This custom chip for [Wokwi](https://wokwi.com/) simulates the output from a specific pressure gauge, designed to aid in the development and testing of projects requiring pressure measurements without the need for physical hardware. It emulates the behavior of the pressure gauge available at [this link](https://a.co/d/7iQsxGg), providing a convenient way to incorporate pressure sensing capabilities into your virtual projects.

## Current Status

Please note that this chip is currently in a non-functional, development stage. It has been activated for the purpose of integration and testing within the Wokwi VSCode Environment. I am in the process of testing the hardware chip and gathering data to build an accurate simulation. This hands-on approach ensures that the virtual chip will closely mimic the real-world behavior and characteristics of the pressure gauge. I'm actively working on bringing the simulation to full functionality and appreciate your interest and patience as we refine this tool.

## Pin Names

| Name | Description                      |
| ---- | -------------------------------- |
| VCC  | Supply voltage                   |
| GND  | Ground                           |
| S+   | Positive pressure signal output  |
| S-   | Negative pressure signal output  |

## Usage

To use the Pressure Gauge Chip in your Wokwi project, include it as a dependency in your `diagram.json` file:

```json
  "dependencies": {
    "chip-pressure-gauge": "github:jisaiaha/pressure-gauge-chip@1.0.0"
  }
