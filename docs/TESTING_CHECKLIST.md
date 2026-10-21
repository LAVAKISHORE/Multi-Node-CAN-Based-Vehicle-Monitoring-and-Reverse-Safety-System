# Hardware testing checklist

Mark each item only after testing on the target hardware. The supplied photos are visual evidence of setup/display states, but do not by themselves verify every functional test below.

- [ ] Build each node firmware separately in the intended Keil/device configuration.
- [ ] Confirm all nodes use matching CAN bit timing and compatible CAN transceivers.
- [ ] Confirm CANH/CANL wiring, common ground, and required bus termination.
- [ ] Verify DS18B20 temperature readings against a known reference.
- [ ] Verify LCD startup and status display.
- [ ] Verify left-indicator switch and LED pattern.
- [ ] Verify right-indicator switch and LED pattern.
- [ ] Verify forward/reverse mode switching.
- [ ] Verify ultrasonic readings at several known distances.
- [ ] Verify reverse alert activates below the configured threshold.
- [ ] Verify no reverse alert is shown in forward mode.
- [ ] Test behavior when the ultrasonic echo is absent or out of range.
- [ ] Record observed CAN IDs, payload bytes, and results in the project notes.

Record date, hardware revision, toolchain version, and any failures before marking the project complete.
