# Color-to-Angle Detection System

## 🔧 Project Name:

**Red Object Controlled Servo & LED System Using Python, Arduino, and Web UI**

---

## 📘 Description:

This project is a creative integration of **computer vision**, **hardware control**, and **interactive design**. Using a webcam, Python detects red-colored objects, converts the number of objects into an angle, and communicates it to an Arduino. The Arduino responds by lighting up LEDs and rotating a servo motor. A web interface also allows manual simulation of angles with aesthetic visual feedback.

---

## 🧠 Components Breakdown:

### 1. Python (Computer Vision)

* Uses OpenCV to capture live video from webcam.
* Detects and counts red color blobs (objects).
* Converts count (0, 1, 2, or 3+) into angles (0°, 45°, 90°, 135°).
* Sends count to Arduino via serial communication.
* Displays rectangles around red objects and shows the detected count and angle in real-time.

### 2. Arduino (Hardware Control)

* Listens for data sent from Python.
* Controls 3 LEDs based on count:

  * 0 = All LEDs OFF
  * 1 = LED1 ON
  * 2 = LED1, LED2 ON
  * 3+ = LED1, LED2, LED3 ON
* Moves a servo motor to corresponding angle (up to 135°).
* Code includes safety cap at 180° to protect servo motor.

### 3. Web Interface (Angle Visualizer)

* Mobile-friendly, responsive web page with soft pastel theme.
* Features intro animation and interactive angle buttons (0° to 135°).
* Clicking a button shows 0 to 3 bright red glowing blocks.
* Acts as a virtual simulation of physical interaction.

---

## 💻 Technologies Used:

* **Python 3.10.x**
* **OpenCV**
* **PySerial**
* **Arduino Uno R3**
* **Servo Motor (SG90)**
* **LEDs + Resistors**
* **HTML/CSS/JavaScript** for web interface

---

## 🔄 Workflow Summary:

1. Python turns on webcam.
2. Filters and isolates red color in HSV range.
3. Counts the number of distinct red blobs.
4. Calculates angle: `angle = count * 45`.
5. Sends count to Arduino via Serial.
6. Arduino receives input, lights LEDs and rotates servo accordingly.
7. Optional: Web UI allows simulation with red block visual feedback.

---

## 📊 Mapping Table:

| Red Objects Detected | Angle | LEDs ON          |
| -------------------- | ----- | ---------------- |
| 0                    | 0°    | None             |
| 1                    | 45°   | LED1             |
| 2                    | 90°   | LED1, LED2       |
| 3+                   | 135°  | LED1, LED2, LED3 |

---

## 📦 Future Improvements:

* Use `MediaPipe` or `cvzone` for finger detection instead of red blobs.
* Add Flask backend to connect web app directly to hardware.
* Use Bluetooth/WiFi module for wireless control.
* Integrate OLED screen for visual feedback on hardware.

---

## 📁 Folder Suggestions:

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

## 👩‍💻 Author

**Hadia** – Computer Science Student, Tech Explorer, Creative Builder

---

## 📜 License

Open for educational and non-commercial use. Please give credit where due.

---

## 📬 Contact

If you'd like help turning this into a presentation, demo, or school submission format, feel free to ask!
