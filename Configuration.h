#pragma once

// 1. Board and communication
#define MOTHERBOARD BOARD_BIGTREE_SKR_MINI_E3_V3_0
#define SERIAL_PORT    1
#define BAUDRATE       250000

// 2. Printer name
#define CUSTOM_MACHINE_NAME "Ender3Pro_SKR_MiniE3V3"

// 3. Display
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

// 4. Temperature sensors
#define TEMP_SENSOR_0        1   // 100K thermistor
#define TEMP_SENSOR_BED      1   // 100K thermistor

// 5. Axis settings (X, Y, Z, E0)
#define DEFAULT_AXIS_STEPS_PER_UNIT   { 80.0, 80.0, 400.0, 415.0 }
#define DEFAULT_MAX_FEEDRATE          { 500.0, 500.0, 5.0, 25.0 }
#define DEFAULT_MAX_ACCELERATION      { 500.0, 500.0, 100.0, 10000.0 }
#define DEFAULT_ACCELERATION          1000.0
#define DEFAULT_RETRACT_ACCELERATION  1000.0

// 6. Endstops
#define ENDSTOPPULLUPS
#define X_MIN_ENDSTOP_INVERTING false
#define Y_MIN_ENDSTOP_INVERTING false
#define Z_MIN_ENDSTOP_INVERTING false
#define X_MAX_ENDSTOP_INVERTING false
#define Y_MAX_ENDSTOP_INVERTING false
#define Z_MAX_ENDSTOP_INVERTING false

#define X_HOME_DIR -1
#define Y_HOME_DIR -1
#define Z_HOME_DIR -1

// 7. Disable auto bed leveling
#undef AUTO_BED_LEVELING_BILINEAR
#undef AUTO_BED_LEVELING_UBL
#undef Z_MIN_PROBE_ENDSTOP
#undef Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN

// 8. No filament runout sensor
#undef FILAMENT_RUNOUT_SENSOR

// 9. EEPROM and Power-loss recovery
#define EEPROM_SETTINGS
#define POWER_LOSS_RECOVERY

// 10. PID defaults
#define DEFAULT_Kp 22.2
#define DEFAULT_Ki 1.08
#define DEFAULT_Kd 114.0