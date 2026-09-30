# PROJECT MANAGEMENT – ACTIVITY 2

## GitHub-Based QA Documentation and Problem Solving based on Electronics/Cross Domain Projects

**Submitted By:** Raju Pisal  
**PRN:** ____________________  
**Class/Division:** ____________________  
**Academic Year:** 2026–2027

## 1. Project Title
Arduino LED Blinking – GitHub-Based QA Documentation

## 2. Objective
To create a basic embedded-system project, document QA issues using GitHub Issues, and track problem solving through comments, commits, testing and issue resolution.

## 3. Brief Description
The Arduino program configures the built-in LED as an output and repeatedly turns it ON for 1 second and OFF for 1 second.

## 4. Hardware and Software
- Arduino Uno or compatible board
- Built-in LED or external LED
- 220 ohm resistor for external LED
- USB cable
- Arduino IDE
- GitHub

## 5. GitHub Repository Link
Paste your repository link here: ______________________________

Suggested repository name: `Arduino-LED-Blinking-GitHub-QA`

## 6. QA Issues Logged

| Issue | Problem | Root Cause | Solution | Status |
|---|---|---|---|---|
| #1 | LED not blinking | Wrong board/pin or upload failure | Correct board/port and upload | Resolved |
| #2 | LED always ON | Incorrect output logic | Correct HIGH/LOW sequence | Resolved |
| #3 | Blink speed incorrect | Incorrect delay values | Use 1000 ms ON/OFF | Resolved |
| #4 | External LED not working | Wiring/polarity/resistor issue | Correct wiring | Resolved |

## 7. Root Cause Analysis – 5 Why
Example: LED not blinking

1. LED is not blinking.
2. Output is not changing.
3. Program may not have uploaded correctly.
4. Wrong board/port may have been selected.
5. Board/port configuration was not verified.

**Root Cause:** Board/port configuration was not verified before upload.

**Corrective Action:** Select the correct board and COM port, upload again, and verify successful upload.

## 8. GitHub Collaboration Summary
GitHub Issues are used to record problems. Comments can be used to discuss causes and solutions. Commits provide traceability for code changes. Issues are closed after the solution is tested.

**Add screenshots:** Repository, Issues, Comments, Commit, and Closed Issue.

## 9. Project Planning and Tracking
1. Create GitHub repository and README.
2. Upload Arduino code.
3. Create four QA issues.
4. Analyze root causes.
5. Implement and commit corrections.
6. Test the corrected program.
7. Close resolved issues.

## 10. Learning Outcome
This activity demonstrates how GitHub supports transparency, traceability, documentation, issue tracking and collaborative problem solving in an electronics project.

## 11. Pre-Reflection
Before the activity, I understood basic Arduino programming but had limited experience using GitHub for structured QA documentation and issue tracking.

## 12. Post-Reflection
After the activity, I understood how to record defects as GitHub Issues, analyze root causes, document corrective actions, use commits for traceability, and close issues after testing.

## 13. Evidence Checklist
- GitHub repository screenshot
- Arduino code screenshot
- Four GitHub Issues
- 5-Why/root-cause analysis
- Commit screenshot
- Closed Issue screenshot
