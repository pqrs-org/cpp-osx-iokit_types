#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include <pqrs/osx/iokit_types.hpp>
#include <unordered_map>
#include <unordered_set>

TEST_CASE("iokit_hid_country_code") {
  using t = pqrs::osx::iokit_hid_country_code;

  t value1(1);
  t value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<t, bool> map;
  map[value1] = true;

  REQUIRE(std::hash<t>{}(t(100)) != std::hash<t>{}(t(0)));
}

TEST_CASE("iokit_hid_location_id") {
  using t = pqrs::osx::iokit_hid_location_id;

  t value1(1);
  t value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<t, bool> map;
  map[value1] = true;

  REQUIRE(std::hash<t>{}(t(100)) != std::hash<t>{}(t(0)));
}

TEST_CASE("iokit_hid_product_id") {
  using t = pqrs::osx::iokit_hid_product_id;

  t value1(1);
  t value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<t, bool> map;
  map[value1] = true;

  REQUIRE(std::hash<t>{}(t(100)) != std::hash<t>{}(t(0)));
}

TEST_CASE("iokit_hid_usage_page") {
  using t = pqrs::osx::iokit_hid_usage_page;

  t value1(1);
  t value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<t, bool> map;
  map[value1] = true;

  REQUIRE(std::hash<t>{}(t(100)) != std::hash<t>{}(t(0)));
}

TEST_CASE("iokit_hid_usage") {
  using t = pqrs::osx::iokit_hid_usage;

  t value1(1);
  t value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<t, bool> map;
  map[value1] = true;

  REQUIRE(std::hash<t>{}(t(100)) != std::hash<t>{}(t(0)));
}

TEST_CASE("iokit_hid_vendor_id") {
  using t = pqrs::osx::iokit_hid_vendor_id;

  t value1(1);
  t value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<t, bool> map;
  map[value1] = true;

  REQUIRE(std::hash<t>{}(t(100)) != std::hash<t>{}(t(0)));
}

TEST_CASE("iokit_keyboard_type") {
  using t = pqrs::osx::iokit_keyboard_type;

  t value1(1);
  t value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<t, bool> map;
  map[value1] = true;

  REQUIRE(std::hash<t>{}(t(100)) != std::hash<t>{}(t(0)));
}

TEST_CASE("make_iokit_keyboard_type_string") {
  REQUIRE(pqrs::osx::make_iokit_keyboard_type_string(pqrs::osx::iokit_keyboard_type(40)) == "ansi");
  REQUIRE(pqrs::osx::make_iokit_keyboard_type_string(pqrs::osx::iokit_keyboard_type(41)) == "iso");
  REQUIRE(pqrs::osx::make_iokit_keyboard_type_string(pqrs::osx::iokit_keyboard_type(42)) == "jis");
  REQUIRE(pqrs::osx::make_iokit_keyboard_type_string(pqrs::osx::iokit_keyboard_type(0)) == "ansi");
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
  pqrs::osx::iokit_hid_usage_page usage_page(1);
  pqrs::osx::iokit_hid_usage usage(2);

  std::unordered_set<std::pair<pqrs::osx::iokit_hid_usage_page, pqrs::osx::iokit_hid_usage>> set;
  set.insert(std::make_pair(usage_page, usage));
}

TEST_CASE("pair<iokit_hid_vendor_id, iokit_hid_product_id>") {
  pqrs::osx::iokit_hid_vendor_id vendor_id(1);
  pqrs::osx::iokit_hid_product_id product_id(2);

  std::unordered_set<std::pair<pqrs::osx::iokit_hid_vendor_id, pqrs::osx::iokit_hid_product_id>> set;
  set.insert(std::make_pair(vendor_id, product_id));
}

TEST_CASE("tuple<iokit_hid_vendor_id, iokit_hid_product_id, iokit_hid_location_id>") {
  pqrs::osx::iokit_hid_vendor_id vendor_id(1);
  pqrs::osx::iokit_hid_product_id product_id(2);
  pqrs::osx::iokit_hid_location_id location_id(2);

  std::unordered_set<std::tuple<pqrs::osx::iokit_hid_vendor_id, pqrs::osx::iokit_hid_product_id, pqrs::osx::iokit_hid_location_id>> set;
  set.insert(std::make_tuple(vendor_id, product_id, location_id));
}
