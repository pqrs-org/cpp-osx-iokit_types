#include <pqrs/osx/iokit_types.hpp>
#include <unordered_map>

int main(void) {
  pqrs::osx::iokit_registry_entry_id registry_entry_id(12345);
  std::cout << "registry_entry_id:" << registry_entry_id << std::endl;

  std::unordered_map<pqrs::osx::iokit_registry_entry_id, std::string> map;
  map[registry_entry_id] = "12345";

  std::cout << "iokit_hid_usage_page_generic_desktop:" << pqrs::osx::iokit_hid_usage_page_generic_desktop << std::endl;
  std::cout << "iokit_hid_usage_page_apple_vendor_keyboard:" << pqrs::osx::iokit_hid_usage_page_apple_vendor_keyboard << std::endl;

  return 0;
}
