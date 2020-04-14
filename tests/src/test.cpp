#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include <pqrs/osx/iokit_types.hpp>
#include <unordered_map>
#include <unordered_set>

TEST_CASE("iokit_hid_country_code") {
  using t = pqrs::osx::iokit_hid_country_code::value_t;

  t value1(1);
  t value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<t, bool> map;
  map[value1] = true;

  REQUIRE(std::hash<t>{}(t(100)) != std::hash<t>{}(t(0)));
}

TEST_CASE("iokit_hid_location_id") {
  using t = pqrs::osx::iokit_hid_location_id::value_t;

  t value1(1);
  t value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<t, bool> map;
  map[value1] = true;

  REQUIRE(std::hash<t>{}(t(100)) != std::hash<t>{}(t(0)));
}

TEST_CASE("iokit_hid_product_id") {
  using t = pqrs::osx::iokit_hid_product_id::value_t;

  t value1(1);
  t value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<t, bool> map;
  map[value1] = true;

  REQUIRE(std::hash<t>{}(t(100)) != std::hash<t>{}(t(0)));
}

TEST_CASE("iokit_hid_usage_page") {
  using t = pqrs::osx::iokit_hid_usage_page::value_t;

  t value1(1);
  t value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<t, bool> map;
  map[value1] = true;

  REQUIRE(std::hash<t>{}(t(100)) != std::hash<t>{}(t(0)));
}

TEST_CASE("iokit_hid_usage") {
  using t = pqrs::osx::iokit_hid_usage::value_t;

  t value1(1);
  t value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<t, bool> map;
  map[value1] = true;

  REQUIRE(std::hash<t>{}(t(100)) != std::hash<t>{}(t(0)));
}

TEST_CASE("iokit_hid_vendor_id") {
  using t = pqrs::osx::iokit_hid_vendor_id::value_t;

  t value1(1);
  t value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<t, bool> map;
  map[value1] = true;

  REQUIRE(std::hash<t>{}(t(100)) != std::hash<t>{}(t(0)));
}

TEST_CASE("iokit_keyboard_type") {
  using t = pqrs::osx::iokit_keyboard_type::value_t;

  t value1(1);
  t value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<t, bool> map;
  map[value1] = true;

  REQUIRE(std::hash<t>{}(t(100)) != std::hash<t>{}(t(0)));
}

TEST_CASE("make_iokit_keyboard_type_string") {
  REQUIRE(pqrs::osx::iokit_keyboard_type::make_string(pqrs::osx::iokit_keyboard_type::ansi) == "ansi");
  REQUIRE(pqrs::osx::iokit_keyboard_type::make_string(pqrs::osx::iokit_keyboard_type::iso) == "iso");
  REQUIRE(pqrs::osx::iokit_keyboard_type::make_string(pqrs::osx::iokit_keyboard_type::jis) == "jis");
  REQUIRE(pqrs::osx::iokit_keyboard_type::make_string(pqrs::osx::iokit_keyboard_type::value_t(0)) == "ansi");
}

TEST_CASE("iokit_registry_entry_id") {
  using t = pqrs::osx::iokit_registry_entry_id;

  t value1(1);
  t value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<t, bool> map;
  map[value1] = true;

  REQUIRE(std::hash<t>{}(t(100)) != std::hash<t>{}(t(0)));
}

TEST_CASE("pair<iokit_hid_usage_page, iokit_hid_usage>") {
  pqrs::osx::iokit_hid_usage_page::value_t usage_page(1);
  pqrs::osx::iokit_hid_usage::value_t usage(2);

  using pair_t = std::pair<pqrs::osx::iokit_hid_usage_page::value_t,
                           pqrs::osx::iokit_hid_usage::value_t>;
  std::unordered_set<pair_t> set;
  set.insert(std::make_pair(usage_page, usage));
}

TEST_CASE("pair<iokit_hid_vendor_id, iokit_hid_product_id>") {
  pqrs::osx::iokit_hid_vendor_id::value_t vendor_id(1);
  pqrs::osx::iokit_hid_product_id::value_t product_id(2);

  using pair_t = std::pair<pqrs::osx::iokit_hid_vendor_id::value_t,
                           pqrs::osx::iokit_hid_product_id::value_t>;
  std::unordered_set<pair_t> set;
  set.insert(std::make_pair(vendor_id, product_id));
}

TEST_CASE("tuple<iokit_hid_vendor_id, iokit_hid_product_id, iokit_hid_location_id>") {
  pqrs::osx::iokit_hid_vendor_id::value_t vendor_id(1);
  pqrs::osx::iokit_hid_product_id::value_t product_id(2);
  pqrs::osx::iokit_hid_location_id::value_t location_id(2);

  using tuple_t = std::tuple<pqrs::osx::iokit_hid_vendor_id::value_t,
                             pqrs::osx::iokit_hid_product_id::value_t,
                             pqrs::osx::iokit_hid_location_id::value_t>;
  std::unordered_set<tuple_t> set;
  set.insert(std::make_tuple(vendor_id, product_id, location_id));
}
