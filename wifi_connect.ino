#include <ESP8266WiFi.h>  // Include WiFi library for ESP8266

const char* ssid = "YOUR_SSID";         // Replace with your WiFi SSID
const char* password = "YOUR_PASSWORD"; // Replace with your WiFi Password

void setup() {
    Serial.begin(115200);   // Start Serial Monitor
    WiFi.begin(ssid, password); // Connect to WiFi

    Serial.print("Connecting to WiFi");
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println("\nConnected to WiFi");
    Serial.print("IP Address: ");
    Serial.println(WiFi.localIP());  // Print IP address
}

void loop() {
    // Your code here (e.g., HTTP requests, MQTT, etc.)
}
