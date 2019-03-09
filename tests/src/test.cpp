#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include <pqrs/osx/iokit_types.hpp>
#include <unordered_map>
#include <unordered_set>

TEST_CASE("iokit_hid_country_code") {
  pqrs::osx::iokit_hid_country_code value1(1);
  pqrs::osx::iokit_hid_country_code value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<pqrs::osx::iokit_hid_country_code, bool> map;
  map[value1] = true;

  REQUIRE(std::hash<pqrs::osx::iokit_hid_country_code>{}(pqrs::osx::iokit_hid_country_code(100)) !=
          std::hash<pqrs::osx::iokit_hid_country_code>{}(pqrs::osx::iokit_hid_country_code(0)));
}

TEST_CASE("iokit_hid_location_id") {
  pqrs::osx::iokit_hid_location_id value1(1);
  pqrs::osx::iokit_hid_location_id value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<pqrs::osx::iokit_hid_location_id, bool> map;
  map[value1] = true;

  REQUIRE(std::hash<pqrs::osx::iokit_hid_location_id>{}(pqrs::osx::iokit_hid_location_id(100)) !=
          std::hash<pqrs::osx::iokit_hid_location_id>{}(pqrs::osx::iokit_hid_location_id(0)));
}

TEST_CASE("iokit_hid_product_id") {
  pqrs::osx::iokit_hid_product_id value1(1);
  pqrs::osx::iokit_hid_product_id value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<pqrs::osx::iokit_hid_product_id, bool> map;
  map[value1] = true;

  REQUIRE(std::hash<pqrs::osx::iokit_hid_product_id>{}(pqrs::osx::iokit_hid_product_id(100)) !=
          std::hash<pqrs::osx::iokit_hid_product_id>{}(pqrs::osx::iokit_hid_product_id(0)));
}

TEST_CASE("iokit_hid_usage_page") {
  pqrs::osx::iokit_hid_usage_page value1(1);
  pqrs::osx::iokit_hid_usage_page value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<pqrs::osx::iokit_hid_usage_page, bool> map;
  map[value1] = true;

  REQUIRE(std::hash<pqrs::osx::iokit_hid_usage_page>{}(pqrs::osx::iokit_hid_usage_page(100)) !=
          std::hash<pqrs::osx::iokit_hid_usage_page>{}(pqrs::osx::iokit_hid_usage_page(0)));
}

TEST_CASE("iokit_hid_usage") {
  pqrs::osx::iokit_hid_usage value1(1);
  pqrs::osx::iokit_hid_usage value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<pqrs::osx::iokit_hid_usage, bool> map;
  map[value1] = true;

  REQUIRE(std::hash<pqrs::osx::iokit_hid_usage>{}(pqrs::osx::iokit_hid_usage(100)) !=
          std::hash<pqrs::osx::iokit_hid_usage>{}(pqrs::osx::iokit_hid_usage(0)));
}

TEST_CASE("iokit_hid_vendor_id") {
  pqrs::osx::iokit_hid_vendor_id value1(1);
  pqrs::osx::iokit_hid_vendor_id value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<pqrs::osx::iokit_hid_vendor_id, bool> map;
  map[value1] = true;

  REQUIRE(std::hash<pqrs::osx::iokit_hid_vendor_id>{}(pqrs::osx::iokit_hid_vendor_id(100)) !=
          std::hash<pqrs::osx::iokit_hid_vendor_id>{}(pqrs::osx::iokit_hid_vendor_id(0)));
}

TEST_CASE("iokit_registry_entry_id") {
  pqrs::osx::iokit_registry_entry_id value1(1);
  pqrs::osx::iokit_registry_entry_id value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<pqrs::osx::iokit_registry_entry_id, bool> map;
  map[value1] = true;

  REQUIRE(std::hash<pqrs::osx::iokit_registry_entry_id>{}(pqrs::osx::iokit_registry_entry_id(100)) !=
          std::hash<pqrs::osx::iokit_registry_entry_id>{}(pqrs::osx::iokit_registry_entry_id(0)));
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
