ESP8266-Based Wi-Fi Network Scanner

About the Project

This project is a simple **Wi-Fi Network Scanner using NodeMCU ESP8266**. It scans for nearby Wi-Fi networks and displays the available network names (SSID) and signal strength (RSSI) through the Arduino Serial Monitor.

Components Required

* NodeMCU ESP8266
* USB Cable
* Computer/Laptop
* Arduino IDE

Software Used

* Arduino IDE
* ESP8266 Board Package
* ESP8266WiFi Library

How It Works

1. Connect the NodeMCU ESP8266 to the computer using a USB cable.
2. Upload the Wi-Fi scanner program using Arduino IDE.
3. Open the Serial Monitor.
4. Set the baud rate to **115200**.
5. The ESP8266 scans for nearby Wi-Fi networks.
6. The detected Wi-Fi network names and signal strengths are displayed.

Output

The Serial Monitor displays information such as:

```text
ESP8266 Wi-Fi Scanner
Scanning for Wi-Fi networks...

Network 1: WiFi_Name
Signal Strength: -45 dBm

Network 2: Home_WiFi
Signal Strength: -67 dBm
```

Applications

* Learning ESP8266 Wi-Fi functionality
* Wireless network scanning
* IoT learning projects
* Testing Wi-Fi signal strength
* Embedded systems practice

Future Improvements

* Display results on an OLED/LCD
* Add a web-based interface
* Sort networks according to signal strength
* Add channel information
* Improve the scanning interface

Author

Haribabu J

This project was created as a self-learning project to understand **ESP8266, Wi-Fi scanning, and embedded programming**.
