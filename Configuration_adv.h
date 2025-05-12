#pragma once

// TMC2209 via UART
#define X_DRIVER_TYPE  TMC2209
#define Y_DRIVER_TYPE  TMC2209
#define Z_DRIVER_TYPE  TMC2209
#define E0_DRIVER_TYPE TMC2209

#define TMC_USE_UART

#define X_HARDWARE_SERIAL  Serial2
#define Y_HARDWARE_SERIAL  Serial2
#define Z_HARDWARE_SERIAL  Serial2
#define E0_HARDWARE_SERIAL Serial2

// Currents (mA)
#define X_CURRENT       800
#define Y_CURRENT       800
#define Z_CURRENT       800
#define E0_CURRENT      800

// Microsteps
#define X_MICROSTEPS    16
#define Y_MICROSTEPS    16
#define Z_MICROSTEPS    16
#define E0_MICROSTEPS   16

// StealthChop silence
#define STEALTHCHOP_XY
#define STEALTHCHOP_Z
#define STEALTHCHOP_E

// No filament sensor
#undef FILAMENT_RUNOUT_SENSOR