#include ../lib/TFT_eSPI/TFT_eSPI.h
#include ../lib/lvgl/lvgl.h
#include <stdio.h>
#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_chip_info.h"
#include "esp_flash.h"
#include "esp_system.h"

void app_main(void)
{
    fflush(stdout);
    esp_restart();
}
