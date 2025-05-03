# Red Object Controlled Angle System

## 🔧 Project Name:

**Red Object-Based Angle Controller Using Python, Arduino, and Web UI**

---

## 📘 Description:

This project blends **computer vision**, **microcontroller programming**, and **UI design** into a single smart system. A red object is tracked by a webcam using Python. The number of red objects detected (up to 3) is converted into a corresponding angle and sent to an Arduino. The Arduino lights up LEDs and rotates a servo accordingly. An optional web interface displays red blocks to represent each detected object, acting as a visual simulation.

---

## 🧠 How It Works:

### ▶ Python Script (red\_tracker.py)

* Uses OpenCV to open the webcam and convert video to HSV format.
* Detects red-colored regions using two HSV masks.
* Counts distinct red blobs that exceed a set size.
* Converts the count (0–3) to an angle (0°, 45°, 90°, 135°).
* Sends the count to Arduino via USB serial.
* Displays live camera feed with red highlights and angle information.

### ▶ Arduino Code (servo\_led\_control.ino)

* Waits for incoming number from Python over serial.
* Uses 3 LEDs to show detection level:

  * 0 → All LEDs OFF
  * 1 → LED1 ON
  * 2 → LED1 + LED2 ON
  * 3 → All LEDs ON
* Controls a servo motor’s angle (based on `count × 45°`), capped at 135°.

### ▶ Web Interface (index.html + style.css + script.js)

* Cute interactive UI with 4 angle buttons: 0°, 45°, 90°, 135°.
* When pressed, the corresponding number of bright red blocks is shown.
* Simulates what the Python+Arduino system would do physically.

---

## 💻 Tech Stack:

* **Python 3.10.x**
* **OpenCV** for color tracking
* **PySerial** for Python–Arduino communication
* **Arduino Uno**
* **HTML/CSS/JS** for web UI
* **Hardware**: LEDs, SG90 Servo, Breadboard, Wires

---

## ⚙ Folder Structure:

```
project-folder/
│
├── python-code/
│   └── red_tracker.py
├── arduino-code/
│   └── servo_led_control.ino
├── web-ui/
│   ├── index.html
│   ├── style.css
│   └── script.js
```

---

## 📊 Detection Logic Table:

| Red Objects Seen | Angle | LEDs Lit           |
| ---------------- | ----- | ------------------ |
| 0                | 0°    | None               |
| 1                | 45°   | LED1               |
| 2                | 90°   | LED1 + LED2        |
| 3 or more        | 135°  | LED1 + LED2 + LED3 |

---

## 🚀 Future Ideas:

* Replace red detection with AI-based gesture tracking (e.g., MediaPipe).
* Use a mobile-controlled web app (Flask + JS) to wirelessly trigger Arduino.
* Add OLED/LCD display on Arduino side for showing current angle.

---

## 👤 Author

**Hadia** — Computer Science student exploring hands-on tech integrations.

---

## 📜 License

Open-source for educational use. Please credit properly if reused.

---


