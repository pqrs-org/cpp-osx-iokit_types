#include <catch2/catch.hpp>

#include <pqrs/osx/iokit_types/extra/nlohmann_json.hpp>

TEST_CASE("nlohmann_json") {
  uint64_t u64 = 13835058055282163712ull; // 2^63 + 2^62
  int32_t i32 = 1610612736;               // 2^30 + 2^29

  // iokit_hid_location_id

  {
    pqrs::osx::iokit_hid_location_id value1(u64);
    nlohmann::json json = value1;
    auto value2 = json.get<pqrs::osx::iokit_hid_location_id>();
    REQUIRE(value1 == value2);
    REQUIRE(json.dump() == "13835058055282163712");
  }

  REQUIRE_THROWS(nlohmann::json::array().get<pqrs::osx::iokit_hid_location_id>());

  // iokit_hid_product_id

  {
    pqrs::osx::iokit_hid_product_id value1(u64);
    nlohmann::json json = value1;
    auto value2 = json.get<pqrs::osx::iokit_hid_product_id>();
    REQUIRE(value1 == value2);
    REQUIRE(json.dump() == "13835058055282163712");
  }

  REQUIRE_THROWS(nlohmann::json::array().get<pqrs::osx::iokit_hid_product_id>());

  // iokit_hid_usage

  {
    pqrs::osx::iokit_hid_usage value1(i32);
    nlohmann::json json = value1;
    auto value2 = json.get<pqrs::osx::iokit_hid_usage>();
    REQUIRE(value1 == value2);
    REQUIRE(json.dump() == "1610612736");
  }

  REQUIRE_THROWS(nlohmann::json::array().get<pqrs::osx::iokit_hid_usage>());

  // iokit_hid_usage_page

  {
    pqrs::osx::iokit_hid_usage_page value1(i32);
    nlohmann::json json = value1;
    auto value2 = json.get<pqrs::osx::iokit_hid_usage_page>();
    REQUIRE(value1 == value2);
    REQUIRE(json.dump() == "1610612736");
  }

  REQUIRE_THROWS(nlohmann::json::array().get<pqrs::osx::iokit_hid_usage_page>());

  // iokit_hid_vendor_id

  {
    pqrs::osx::iokit_hid_vendor_id value1(u64);
    nlohmann::json json = value1;
    auto value2 = json.get<pqrs::osx::iokit_hid_vendor_id>();
    REQUIRE(value1 == value2);
    REQUIRE(json.dump() == "13835058055282163712");
  }

  REQUIRE_THROWS(nlohmann::json::array().get<pqrs::osx::iokit_hid_vendor_id>());

  // iokit_registry_entry_id

  {
    pqrs::osx::iokit_registry_entry_id value1(u64);
    nlohmann::json json = value1;
    auto value2 = json.get<pqrs::osx::iokit_registry_entry_id>();
    REQUIRE(value1 == value2);
    REQUIRE(json.dump() == "13835058055282163712");
  }

  REQUIRE_THROWS(nlohmann::json::array().get<pqrs::osx::iokit_registry_entry_id>());
}
