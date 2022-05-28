#include <boost/ut.hpp>
#include <pqrs/osx/iokit_types/extra/boost.hpp>

void run_boost_test(void) {
  using namespace boost::ut;
  using namespace boost::ut::literals;

  "boost"_test = [] {
    {
      pqrs::osx::iokit_hid_location_id::value_t v(100);
      expect(std::hash<pqrs::osx::iokit_hid_location_id::value_t>{}(v) ==
             pqrs::osx::iokit_hid_location_id::hash_value(v));
    }

    {
      pqrs::osx::iokit_keyboard_type::value_t v(100);
      expect(std::hash<pqrs::osx::iokit_keyboard_type::value_t>{}(v) ==
             pqrs::osx::iokit_keyboard_type::hash_value(v));
    }

    {
      pqrs::osx::iokit_registry_entry_id::value_t v(100);
      expect(std::hash<pqrs::osx::iokit_registry_entry_id::value_t>{}(v) ==
             pqrs::osx::iokit_registry_entry_id::hash_value(v));
    }
  };
}
