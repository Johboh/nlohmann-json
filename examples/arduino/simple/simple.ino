#include <Arduino.h>
#include <nlohmann/json.hpp>

void setup() {
  nlohmann::json doc;
  doc["hello"] = "world";
}

void loop() {}