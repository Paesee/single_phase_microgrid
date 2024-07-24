# Grid-Forming Inverter applied to a Single-Phase Microgrid

This repository contains the source code and documentation for the implementation of a control strategy for a single-phase microgrid.

## Overview
The microgrid control system presented here employs grid-forming inverters to ensure voltage and frequency stability while integrating renewable energy sources effectively. The control strategy consists of inner control loops designed using a proportional controller for current and a proportional-resonant controller for voltage regulation. Additionally, virtual impedance and droop control are implemented to facilitate load sharing without communication between inverters.

## Directory Structure
- **src**: Contains the source code for the microgrid control algorithms implemented in C.
- **output**: Contains compiled dynamic-link library (.dll) files generated from the source code.
- **matlab**: Contains the MATLAB project file for the microgrid controller.
- **hil**: Contains the hardware-in-the-loop (HIL) simulation setup in Typhoon HIL Controller Center.

## Getting Started
To get started with using the microgrid control system, follow these steps:
1. Clone this repository to your local machine.
2. Navigate to the `hil` directory and open `single_phase_microgrid.tse` using Typhoon HIL Control Center.
3. Compile the simulation using `Compile and load model in SCADA VHIL MODE`.
4. Run the simulation and feel free to change microgrid and control parameters.

For detailed documentation about the control law, refer to the file in the `doc` directory.

## Contributions
Contributions to this project are welcome. If you find any issues or have suggestions for improvements, feel free to open an issue or submit a pull request.

## License
This project is licensed under the GPL-3.0 license - see the [COPYING](COPYING) file for details.