# esp32_debug_test

This project tests debugging of esp32doit-devkit-v1 with jtag-lock-pick_tiny_2.
How to reproduce the problem:
- pio project init --ide vscode -e esp32
- in platform menu: pio/project tasks/env:esp32dev-4pin-test/advanced/Pre-Debug
- press F5
- watch debugger crash
