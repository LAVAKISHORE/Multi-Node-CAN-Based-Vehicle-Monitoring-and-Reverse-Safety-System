# Hardware validation log

Use this checklist during real board testing. Mark each item only after observing it on the actual hardware.

| Test ID | Test | Result (PASS/FAIL/NOT RUN) | Notes / measurement |
|---|---|---|---|
| T01 | Main Node LCD initializes | NOT RUN | |
| T02 | DS18B20 reading is plausible and stable | NOT RUN | |
| T03 | Left switch produces CAN ID `0x101`, command `L` | NOT RUN | |
| T04 | Right switch produces CAN ID `0x101`, command `R` | NOT RUN | |
| T05 | Indicator Node receives commands and animates LEDs | NOT RUN | |
| T06 | Mode switch sends CAN ID `0x102` with mode 0/1 | NOT RUN | |
| T07 | Reverse Node measures distance with no close obstacle | NOT RUN | |
| T08 | Reverse Node sends CAN ID `0x201` with distance/alert | NOT RUN | |
| T09 | Obstacle below 20 cm activates the Main Node buzzer | NOT RUN | |
| T10 | Buzzer turns off when obstacle is outside threshold | NOT RUN | |
| T11 | CAN communication recovers after a node restart | NOT RUN | |
| T12 | Sensor disconnected / no echo is handled safely | NOT RUN | |

## Test environment

- MCU board and revision:
- Toolchain/compiler version:
- CPU clock:
- Peripheral clock:
- CAN bit rate:
- Transceiver:
- Bus length:
- Termination:
- Power supply:
- Test date:
