# Microgrid Hierarchical Control

This repository contains the source code and documentation for the implementation of a hierarchical control strategy for a single-phase microgrid.

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
2. Navigate to the `src` directory and compile the source code using your preferred compiler. If you're using Typhoon HIL, you can refer to the [Typhoon HIL C Function Documentation](https://www.typhoon-hil.com/documentation/typhoon-hil-software-manual/References/c_function.html) for guidance.
3. Configure the microgrid control system parameters according to your specific setup and requirements.
4. Run the compiled executable on the target hardware platform.

For detailed instructions and documentation, refer to the files in the `docs` directory.

## Contributions
Contributions to this project are welcome. If you find any issues or have suggestions for improvements, feel free to open an issue or submit a pull request.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.