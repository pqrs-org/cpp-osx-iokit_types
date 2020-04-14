#include <pqrs/osx/iokit_types.hpp>
#include <unordered_map>

int main(void) {
  pqrs::osx::iokit_registry_entry_id::value_t registry_entry_id(12345);
  std::cout << "registry_entry_id:" << registry_entry_id << std::endl;

  std::unordered_map<pqrs::osx::iokit_registry_entry_id::value_t, std::string> map;
  map[registry_entry_id] = "12345";

  std::cout << "iokit_hid_usage_page::generic_desktop:" << pqrs::osx::iokit_hid_usage_page::generic_desktop << std::endl;
  std::cout << "iokit_hid_usage_page::apple_vendor_keyboard:" << pqrs::osx::iokit_hid_usage_page::apple_vendor_keyboard << std::endl;
  std::cout << "iokit_hid_usage::keyboard_or_keypad::keyboard_spacebar: " << pqrs::osx::iokit_hid_usage::keyboard_or_keypad::keyboard_spacebar << std::endl;

  return 0;
}
