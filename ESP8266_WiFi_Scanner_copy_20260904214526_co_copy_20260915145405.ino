#include <ESP8266WiFi.h>

void setup() {
  Serial.begin(115200);
  delay(1000);

  // Set ESP8266 to Wi-Fi Station mode
  WiFi.mode(WIFI_STA);

  // Disconnect from any previously connected Wi-Fi
  WiFi.disconnect();
  delay(1000);

  Serial.println();
  Serial.println("ESP8266 Wi-Fi Scanner");
  Serial.println("Ready to scan!");
}

void loop() {

  Serial.println();
  Serial.println("Scanning for Wi-Fi networks...");

  // Scan available Wi-Fi networks
  int n = WiFi.scanNetworks();

  Serial.println("Scan finished!");

  if (n == 0) {
    Serial.println("No Wi-Fi networks found.");
  }
  else {
    Serial.print(n);
    Serial.println(" Wi-Fi networks found:");

    // Display each Wi-Fi network
    for (int i = 0; i < n; i++) {

      Serial.print(i + 1);
      Serial.print(". ");

      // Wi-Fi network name
      Serial.print(WiFi.SSID(i));

      // Signal strength
      Serial.print(" | Signal: ");
      Serial.print(WiFi.RSSI(i));
      Serial.print(" dBm");

      // Wi-Fi encryption type
      Serial.print(" | Encryption: ");

      if (WiFi.encryptionType(i) == ENC_TYPE_NONE) {
        Serial.println("Open");
      }
      else {
        Serial.println("Secured");
      }

      delay(10);
    }
  }

  Serial.println();
  Serial.println("Next scan in 5 seconds...");

  // Wait 5 seconds before scanning again
  delay(5000);
}