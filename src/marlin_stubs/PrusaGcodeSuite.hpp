#pragma once

namespace PrusaGcodeSuite {
void G26();  /// first layer calibration
void G162(); /// handler-specific configuration

void M117(); /// M117 LCD message.

void M300(); /// M300 play sound.

void M999(); /// M999 reset MCU. Prusa STM32 platform specific

void M1400(); /// Preheat. Prusa STM32 platform specific

void M997(); /// M997 Update firmware. Prusa STM32 platform specific
}
