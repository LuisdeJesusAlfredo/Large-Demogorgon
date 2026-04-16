**DEMOGORGON STALKER**

*(Arduino-based animatronic built with 2 servo motors and a gear motor).*

<img width="550" height="784" alt="Large Demogorgon" src="https://github.com/user-attachments/assets/703ccb7d-eb46-436b-aceb-9c5b85b475bb" />


**A BRIEF OF HISTORY**

This is the main animatronic created by my team for the 17th Mexican Robotics Tournament, part of RoboCup 2026. The Great Demogorgon is a tri-motor robot built with two SG-90 servomotors and a geared motor for the child's rotation. The concept for the main Demogorgon was very difficult to build due to its final size and assembly. My teammate, *ISABELLA,* proposed making it in three parts: the head with tentacles, the robotic arm, and the main body. Each part required a different process: the head with tentacles was powered by an SG-90 servomotor that controls the tentacles with five knotted wires. The robotic arm is an Arduino robot with a geared motor. Finally, the main body (who we want to have action movements, like chasing Will and Dustin) was built with another SG-90 servomotor to give the body some rotation angles.

---

**MATERIALS:**

- 2 Arduino Uno R3,
- 1 H-bridge - *like L298N module*,
- Jumper Wires,
- 1 Gearmotor,
- 9V Battery,

---

**CONNECTIONS**

Motor Base:
- Connect the switch to the breadboard buzzers.
- Behind the buzzers, connect the motor pins.

Body:
- Connect IN1 to pin 9.
- Connect IN2 to pin 8.
- Connect ENA to pin 10.
- Bridge the GND and 5V lines from the H-bridge to the Arduino.
- Connect the motor to OUT1 and OUT1.

---

**LIMITATIONS**

Check the total weight of the robotic arm, as this can cause problems with the motor's rotation angle.

**Furthermore, we want to develop and improve the speed and stability.**

---

**SEE ALSO**

CHECK OUT FOR THE OTHER PROJECTS THAT WE MADE!

- [Mini Demogorgons](https://github.com/LuisdeJesusAlfredo/Mini-Demogorgons)

- [Will & Dustin](https://github.com/LuisdeJesusAlfredo/Will-Dustin)
