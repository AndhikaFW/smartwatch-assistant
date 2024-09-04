#include ../lib/lvgl/lvgl.h
#include "Arduino.h"
#include <LovyanGFX.hpp>
#include <ESP32Time.h>
#include <NimBLEDevice.h>

#include "Qmi8658c.h"                // Include the library for QMI8658C sensor
#define QMI_ADDRESS 0x6B             // Define QMI8658C I2C address
#define QMI8658C_I2C_FREQUENCY 40000 // Define I2C frequency as 80kHz (in Hz)
