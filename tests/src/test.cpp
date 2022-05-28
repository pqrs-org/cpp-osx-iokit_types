#include "boost_test.hpp"
#include "nlohmann_json_test.hpp"
#include <boost/ut.hpp>
#include <pqrs/osx/iokit_types.hpp>
#include <unordered_map>
#include <unordered_set>

int main(void) {
  using namespace boost::ut;
  using namespace boost::ut::literals;

  "iokit_hid_location_id"_test = [] {
    using t = pqrs::osx::iokit_hid_location_id::value_t;

    t value1(1);
    t value2(2);

    expect(value1 != value2);
    expect(value1 < value2);

    std::unordered_map<t, bool> map;
    map[value1] = true;

    expect(std::hash<t>{}(t(100)) != std::hash<t>{}(t(0)));
  };

  "iokit_keyboard_type"_test = [] {
    using t = pqrs::osx::iokit_keyboard_type::value_t;

    t value1(1);
    t value2(2);

    expect(value1 != value2);
    expect(value1 < value2);

    std::unordered_map<t, bool> map;
    map[value1] = true;

    expect(std::hash<t>{}(t(100)) != std::hash<t>{}(t(0)));
  };

  "make_iokit_keyboard_type_string"_test = [] {
    expect(pqrs::osx::iokit_keyboard_type::make_string(pqrs::osx::iokit_keyboard_type::ansi) == "ansi");
    expect(pqrs::osx::iokit_keyboard_type::make_string(pqrs::osx::iokit_keyboard_type::iso) == "iso");
    expect(pqrs::osx::iokit_keyboard_type::make_string(pqrs::osx::iokit_keyboard_type::jis) == "jis");
    expect(pqrs::osx::iokit_keyboard_type::make_string(pqrs::osx::iokit_keyboard_type::value_t(0)) == "ansi");
  };

  "iokit_registry_entry_id"_test = [] {
    using t = pqrs::osx::iokit_registry_entry_id::value_t;

    t value1(1);
    t value2(2);

    expect(value1 != value2);
    expect(value1 < value2);

    std::unordered_map<t, bool> map;
    map[value1] = true;

    expect(std::hash<t>{}(t(100)) != std::hash<t>{}(t(0)));
  };

  "tuple<hid::vendor_id, hid::product_id, iokit_hid_location_id>"_test = [] {
    pqrs::hid::vendor_id::value_t vendor_id(1);
    pqrs::hid::product_id::value_t product_id(2);
    pqrs::osx::iokit_hid_location_id::value_t location_id(2);

    using tuple_t = std::tuple<pqrs::hid::vendor_id::value_t,
                               pqrs::hid::product_id::value_t,
                               pqrs::osx::iokit_hid_location_id::value_t>;
    std::unordered_set<tuple_t> set;
    set.insert(std::make_tuple(vendor_id, product_id, location_id));
  };

  run_boost_test();
  run_nlohmann_json_test();

  return 0;
}
