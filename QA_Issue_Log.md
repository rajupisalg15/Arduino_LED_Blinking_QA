# QA Issue Log

| Issue | Problem | Root Cause | Solution | Status |
|---|---|---|---|---|
| #1 | LED not blinking | Wrong board/pin or upload failure | Select correct board/port and upload again | Resolved |
| #2 | LED always ON | Incorrect output logic | Correct HIGH/LOW sequence | Resolved |
| #3 | Blink speed incorrect | Incorrect delay values | Set ON/OFF time to 1000 ms | Resolved |
| #4 | External LED not working | Wiring/polarity/resistor problem | Correct wiring and resistor | Resolved |

## 5-Why Example: Issue #1
1. LED is not blinking.
2. Output is not changing.
3. Program may not have uploaded correctly.
4. Wrong board/port may have been selected.
5. Board/port was not verified before upload.

**Root cause:** Board/port configuration was not verified.

**Corrective action:** Select the correct board and COM port, upload again, and verify successful upload.
