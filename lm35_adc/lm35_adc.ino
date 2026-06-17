#include <Wire.h>
#include <Adafruit_ADS1X15.h>
#include <U8g2lib.h>

// OLED (Try SH1106 first)
U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, U8X8_PIN_NONE);
// If not working, try below:
// U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, U8X8_PIN_NONE);

// ADS1115
Adafruit_ADS1115 ads;

// Variables
float voltage = 5;
float temperature = 0;

void setup() {
  Serial.begin(115200);

  // I2C init (PB6=SCL, PB7=SDA)
  Wire.begin();

  // ADS1115 init
  if (!ads.begin()) {
    Serial.println("❌ ADS1115 NOT DETECTED!");
    while (1);
  }

  Serial.println("✅ ADS1115 Connected");

  // Set gain
  ads.setGain(GAIN_ONE);  // ±4.096V range

  // OLED init
  u8g2.begin();

  Serial.println("✅ OLED Ready");
}

void loop() {

  // Read ADC channel 0
  // int16_t adc0 = ads.readADC_SingleEnded(0);

  // // Convert ADC to voltage
  // voltage = adc0 * 0.125 / 1000.0;

  int16_t adc0 = 2400;  // Fake ADC value
  voltage = adc0 * 0.125 / 1000.0;

  // LM35 temperature
  temperature = voltage * 100.0;

  // SERIAL DEBUG
  Serial.print("ADC: ");
  Serial.print(adc0);
  Serial.print(" | Voltage: ");
  Serial.print(voltage, 3);
  Serial.print(" V | Temp: ");
  Serial.print(temperature, 2);
  Serial.println(" C");

  // OLED DISPLAY
  u8g2.clearBuffer();

  u8g2.setFont(u8g2_font_ncenB08_tr);

  u8g2.drawStr(0, 12, "Temp Monitor");

  char buffer[20];

  // Voltage display (FIXED)
  dtostrf(voltage, 4, 3, buffer);
  u8g2.drawStr(0, 35, "Volt:");
  u8g2.drawStr(55, 35, buffer);
  u8g2.drawStr(95, 35, "V");

  // Temperature display (FIXED)
  dtostrf(temperature, 4, 2, buffer);
  u8g2.drawStr(0, 55, "Temp:");
  u8g2.drawStr(55, 55, buffer);
  u8g2.drawStr(95, 55, "C");

  u8g2.sendBuffer();

  delay(1000);
}