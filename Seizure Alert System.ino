#define BLYNK_TEMPLATE_ID "TMPL3oplX3dQ4"
#define BLYNK_TEMPLATE_NAME "Seizure Alert System"
#define BLYNK_AUTH_TOKEN "s7q7euZ4-i77Az2s10w3-2n-inrZhXYO"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;

// WiFi credentials
char ssid[] = "realme 12 5G";
char pass[] = "omg1290jk";

// Pins
#define LED_PIN D5
#define BUZZER_PIN D6
#define SDA_PIN D2
#define SCL_PIN D1

bool alertSent = false;

void setup() {

  Serial.begin(9600);
  delay(1000);

  Serial.println("Booting...");

  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);
  digitalWrite(BUZZER_PIN, LOW);

  // ---------- MPU6050 ----------//
  Wire.begin(SDA_PIN, SCL_PIN);
  mpu.initialize();

  if (mpu.testConnection()) {
    Serial.println("MPU6050 connected ✅");
  } else {
    Serial.println("MPU6050 NOT connected ❌");
  }

  // ---------- WiFi ----------
  Serial.print("Connecting to WiFi: ");
  Serial.println(ssid);

  WiFi.begin(ssid, pass);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi Connected ✅");
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());

  // ---------- Blynk ----------
  Serial.println("Connecting to Blynk...");
  Blynk.config(BLYNK_AUTH_TOKEN);

  if (Blynk.connect()) {
    Serial.println("Blynk Connected ✅");
  } else {
    Serial.println("Blynk NOT Connected ❌");
  }

  Serial.println("System Ready 🚀");
}

void loop() {

  Blynk.run();

  int16_t ax, ay, az;
  mpu.getAcceleration(&ax, &ay, &az);

  float A = sqrt(
    (float)ax * ax +
    (float)ay * ay +
    (float)az * az
  ) / 16384.0;

  int heartRate = random(70, 90);
  int spo2 = random(96, 99);

  if (A > 2.5) {
    heartRate = random(130, 160);
    spo2 = random(88, 92);
  }

  Serial.print("Acceleration: ");
  Serial.print(A);
  Serial.print(" | HR: ");
  Serial.print(heartRate);
  Serial.print(" BPM | SpO2: ");
  Serial.print(spo2);
  Serial.println(" %");

  // ---------- Seizure Detection ----------
  if (A > 2.5 && heartRate > 120 && spo2 < 92) {

    digitalWrite(LED_PIN, HIGH);

    // 🔔 Buzzer beep
    digitalWrite(BUZZER_PIN, HIGH);
    delay(200);
    digitalWrite(BUZZER_PIN, LOW);

    if (!alertSent) {
      Serial.println("⚠ POSSIBLE SEIZURE DETECTED!");
      Blynk.logEvent("seizure_alert_system");
      alertSent = true;
    }

  } else {

    digitalWrite(LED_PIN, LOW);
    alertSent = false;
  }

  delay(200);
}
