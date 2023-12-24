#include <esp_log.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <nlohmann/json.hpp>

#define TAG "example"

extern "C" {
void app_main();
}

void app_main(void) {
  nlohmann::json doc;
  doc["hello"] = "world";

  ESP_LOGI(TAG, "doc: %s", doc.dump().c_str());

  while (1) {
    vTaskDelay(500 / portTICK_PERIOD_MS);
    fflush(stdout);
  }
}
