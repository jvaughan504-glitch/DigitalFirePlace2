#pragma once

#include <Arduino.h>

namespace FireplaceConfig {
// Pin assignments
static constexpr uint8_t kRelayPin = 5;
static constexpr uint8_t kDhtPin = 4;
static constexpr uint8_t kNeoPixelPin = 18;
static constexpr uint8_t kButtonTempUp = 25;
static constexpr uint8_t kButtonTempDown = 26;
static constexpr uint8_t kButtonBrightUp = 27;
static constexpr uint8_t kButtonBrightDown = 14;
static constexpr uint8_t kButtonMode = 32;

// NeoPixel configuration
static constexpr uint16_t kNeoPixelCount = 10;

// Control configuration
static constexpr float kTemperatureStep = 0.5f;
static constexpr float kTemperatureSmoothAlpha = 0.2f;  // EMA coefficient for sensor noise
static constexpr float kHumiditySmoothAlpha = 0.2f;
static constexpr uint8_t kMinBrightness = 10;
static constexpr uint8_t kMaxBrightness = 255;
static constexpr uint8_t kBrightnessStep = 15;
static constexpr float kMinTargetTemperature = 15.0f;
static constexpr float kMaxTargetTemperature = 30.0f;
static constexpr float kHysteresis = 0.5f; // Degrees Celsius

// Button debounce timings
static constexpr uint32_t kDebounceDelayMs = 50;
static constexpr uint32_t kHoldRepeatDelayMs = 400;
static constexpr uint32_t kHoldRepeatRateMs = 150;

// Display configuration (use -1 when the OLED reset line is not exposed)
static constexpr int8_t kOledResetPin = -1;
static constexpr uint8_t kOledAddress = 0x3C;
// Set to -1/-1 to use Wire defaults; override when your OLED is wired to non-default pins.
static constexpr int8_t kOledSdaPin = 21;
static constexpr int8_t kOledSclPin = 22;

// Fire animation timings
static constexpr uint32_t kAnimationFrameMs = 35;

// Wi-Fi configuration (used only on ESP32 builds)
static constexpr char kWifiSsid[] = "BELL728";
static constexpr char kWifiPassword[] = "9134EC94D365";
static constexpr uint32_t kWifiConnectTimeoutMs = 10000;
}

