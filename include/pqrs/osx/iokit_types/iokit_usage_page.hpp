#pragma once

// (C) Copyright Takayama Fumihiko 2018.
// Distributed under the Boost Software License, Version 1.0.
// (See http://www.boost.org/LICENSE_1_0.txt)

#include <IOKit/hid/IOHIDUsageTables.h>
#include <iostream>
#include <type_safe/strong_typedef.hpp>
#include <unordered_set>

namespace pqrs {
namespace osx {
struct iokit_usage_page : type_safe::strong_typedef<iokit_usage_page, int32_t>,
                          type_safe::strong_typedef_op::equality_comparison<iokit_usage_page>,
                          type_safe::strong_typedef_op::relational_comparison<iokit_usage_page> {
  using strong_typedef::strong_typedef;
};

constexpr iokit_usage_page iokit_usage_page_generic_desktop = iokit_usage_page(kHIDPage_GenericDesktop);
constexpr iokit_usage_page iokit_usage_page_simulation = iokit_usage_page(kHIDPage_Simulation);
constexpr iokit_usage_page iokit_usage_page_vr = iokit_usage_page(kHIDPage_VR);
constexpr iokit_usage_page iokit_usage_page_sport = iokit_usage_page(kHIDPage_Sport);
constexpr iokit_usage_page iokit_usage_page_game = iokit_usage_page(kHIDPage_Game);
constexpr iokit_usage_page iokit_usage_page_generic_device_controls = iokit_usage_page(kHIDPage_GenericDeviceControls);
constexpr iokit_usage_page iokit_usage_page_keyboard_or_keypad = iokit_usage_page(kHIDPage_KeyboardOrKeypad);
constexpr iokit_usage_page iokit_usage_page_leds = iokit_usage_page(kHIDPage_LEDs);
constexpr iokit_usage_page iokit_usage_page_button = iokit_usage_page(kHIDPage_Button);
constexpr iokit_usage_page iokit_usage_page_ordinal = iokit_usage_page(kHIDPage_Ordinal);
constexpr iokit_usage_page iokit_usage_page_telephony = iokit_usage_page(kHIDPage_Telephony);
constexpr iokit_usage_page iokit_usage_page_consumer = iokit_usage_page(kHIDPage_Consumer);
constexpr iokit_usage_page iokit_usage_page_digitizer = iokit_usage_page(kHIDPage_Digitizer);
constexpr iokit_usage_page iokit_usage_page_pid = iokit_usage_page(kHIDPage_PID);
constexpr iokit_usage_page iokit_usage_page_unicode = iokit_usage_page(kHIDPage_Unicode);
constexpr iokit_usage_page iokit_usage_page_alphanumeric_display = iokit_usage_page(kHIDPage_AlphanumericDisplay);
constexpr iokit_usage_page iokit_usage_page_sensor = iokit_usage_page(kHIDPage_Sensor);
constexpr iokit_usage_page iokit_usage_page_monitor = iokit_usage_page(kHIDPage_Monitor);
constexpr iokit_usage_page iokit_usage_page_monitorEnumerated = iokit_usage_page(kHIDPage_MonitorEnumerated);
constexpr iokit_usage_page iokit_usage_page_monitorVirtual = iokit_usage_page(kHIDPage_MonitorVirtual);
constexpr iokit_usage_page iokit_usage_page_monitorReserved = iokit_usage_page(kHIDPage_MonitorReserved);
constexpr iokit_usage_page iokit_usage_page_power_device = iokit_usage_page(kHIDPage_PowerDevice);
constexpr iokit_usage_page iokit_usage_page_battery_system = iokit_usage_page(kHIDPage_BatterySystem);
constexpr iokit_usage_page iokit_usage_page_power_reserved = iokit_usage_page(kHIDPage_PowerReserved);
constexpr iokit_usage_page iokit_usage_page_power_reserved2 = iokit_usage_page(kHIDPage_PowerReserved2);
constexpr iokit_usage_page iokit_usage_page_bar_code_scanner = iokit_usage_page(kHIDPage_BarCodeScanner);
constexpr iokit_usage_page iokit_usage_page_weighing_device = iokit_usage_page(kHIDPage_WeighingDevice);
constexpr iokit_usage_page iokit_usage_page_scale = iokit_usage_page(kHIDPage_Scale);
constexpr iokit_usage_page iokit_usage_page_magnetic_stripe_reader = iokit_usage_page(kHIDPage_MagneticStripeReader);
constexpr iokit_usage_page iokit_usage_page_camera_control = iokit_usage_page(kHIDPage_CameraControl);
constexpr iokit_usage_page iokit_usage_page_arcade = iokit_usage_page(kHIDPage_Arcade);

inline std::ostream& operator<<(std::ostream& stream, const iokit_usage_page& value) {
  return stream << type_safe::get(value);
}
} // namespace osx
} // namespace pqrs

namespace std {
template <>
struct hash<pqrs::osx::iokit_usage_page> : type_safe::hashable<pqrs::osx::iokit_usage_page> {
};
} // namespace std
