# Smart Seatbelt Warning System

An Arduino-based prototype for detecting passenger presence with an analog sensor. The current sketch reads the sensor, compares its value with a configurable threshold, and reports the reading and passenger-detection state over the Serial Monitor.

> **Project status:** The included sketch demonstrates passenger detection. It does not currently read seatbelt status or activate a buzzer/display, so those warning features would need to be added to complete a full seatbelt-warning system.

Here is Tnkercad link to see the simulation - https://www.tinkercad.com/things/3KKA8UNf84a-smartseatbeltwarningsystem?sharecode=fqR8ShtW85CScE9-hX0XgCvrktEwcmWt08vJwMabL-o
## How It Works

1. Reads the analog sensor connected to pin `A0`.
2. Compares the reading with a threshold (`512` by default).
3. Sets `passengerDetected` to `1` when the reading meets or exceeds the threshold, otherwise `0`.
4. Prints the sensor value and detection state to the Serial Monitor every 500 ms.

## Hardware

- Arduino-compatible board with an analog input
- Analog sensor configured to detect passenger presence
- Jumper wires

Connect the sensor's analog output to `A0`, and connect its power and ground according to the sensor and board specifications. Verify the wiring and voltage requirements for your specific components before powering the circuit.

## Getting Started

1. Open [`smart_seatbelt_warning_system1.ino`](smart_seatbelt_warning_system1.ino) in the Arduino IDE.
2. Connect the Arduino board and select the correct board and port.
3. Upload the sketch.
4. Open **Tools → Serial Monitor** and set the baud rate to **9600**.
5. Observe the sensor reading and passenger state. Adjust `threshold` in the sketch to suit your sensor and setup.

The reported sensor value is typically in the range `0–1023` on boards with a 10-bit ADC. The appropriate threshold depends on the sensor and should be calibrated using real readings.

## Repository Contents

- `smart_seatbelt_warning_system1.ino` — Arduino code
- `Smart_Seatbelt_Warning_System_Report.pdf` — project report
- `Test_*.png`, `arduino_test_*.png`, `arduino_final_result.png` — test and result images

## Future Improvements

- Add a seatbelt-status input and define warning behavior when an occupied seat is unbuckled.
- Add an audible or visual alert.
- Calibrate and validate the detection threshold across different conditions.

## License

No license is currently specified. Contact the repository owner before reusing or distributing this project.
