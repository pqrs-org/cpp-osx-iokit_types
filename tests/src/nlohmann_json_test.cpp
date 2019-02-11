#include <catch2/catch.hpp>

#include <pqrs/osx/iokit_types/extra/nlohmann_json.hpp>

TEST_CASE("nlohmann_json") {
  uint64_t u64 = 13835058055282163712ull; // 2^63 + 2^62
  int32_t i32 = 1610612736;               // 2^30 + 2^29

  // iokit_hid_location_id

  {
    using t = pqrs::osx::iokit_hid_location_id;

    {
      t value1(u64);
      nlohmann::json json = value1;
      auto value2 = json.get<t>();
      REQUIRE(value1 == value2);
      REQUIRE(json.dump() == "13835058055282163712");
    }

    REQUIRE_THROWS(nlohmann::json::array().get<t>());
    REQUIRE_THROWS_AS(
        nlohmann::json().get<t>(),
        pqrs::json::unmarshal_error);
    REQUIRE_THROWS_WITH(
        nlohmann::json().get<t>(),
        "json must be number, but is `null`");
    REQUIRE_THROWS_WITH(
        nlohmann::json(true).get<t>(),
        "json must be number, but is `true`");
    REQUIRE_THROWS_WITH(
        nlohmann::json::object().get<t>(),
        "json must be number, but is `{}`");
    REQUIRE_THROWS_WITH(
        nlohmann::json::array().get<t>(),
        "json must be number, but is `[]`");
    REQUIRE_THROWS_WITH(
        nlohmann::json("1234").get<t>(),
        "json must be number, but is `\"1234\"`");
  }

  // iokit_hid_product_id

  {
    using t = pqrs::osx::iokit_hid_product_id;

    {
      t value1(u64);
      nlohmann::json json = value1;
      auto value2 = json.get<t>();
      REQUIRE(value1 == value2);
      REQUIRE(json.dump() == "13835058055282163712");
    }

    REQUIRE_THROWS(nlohmann::json::array().get<t>());
    REQUIRE_THROWS_AS(
        nlohmann::json().get<t>(),
        pqrs::json::unmarshal_error);
    REQUIRE_THROWS_WITH(
        nlohmann::json().get<t>(),
        "json must be number, but is `null`");
    REQUIRE_THROWS_WITH(
        nlohmann::json(true).get<t>(),
        "json must be number, but is `true`");
    REQUIRE_THROWS_WITH(
        nlohmann::json::object().get<t>(),
        "json must be number, but is `{}`");
    REQUIRE_THROWS_WITH(
        nlohmann::json::array().get<t>(),
        "json must be number, but is `[]`");
    REQUIRE_THROWS_WITH(
        nlohmann::json("1234").get<t>(),
        "json must be number, but is `\"1234\"`");
  }

  // iokit_hid_usage

  {
    using t = pqrs::osx::iokit_hid_usage;

    {
      t value1(i32);
      nlohmann::json json = value1;
      auto value2 = json.get<t>();
      REQUIRE(value1 == value2);
      REQUIRE(json.dump() == "1610612736");
    }

    REQUIRE_THROWS(nlohmann::json::array().get<t>());
    REQUIRE_THROWS_AS(
        nlohmann::json().get<t>(),
        pqrs::json::unmarshal_error);
    REQUIRE_THROWS_WITH(
        nlohmann::json().get<t>(),
        "json must be number, but is `null`");
    REQUIRE_THROWS_WITH(
        nlohmann::json(true).get<t>(),
        "json must be number, but is `true`");
    REQUIRE_THROWS_WITH(
        nlohmann::json::object().get<t>(),
        "json must be number, but is `{}`");
    REQUIRE_THROWS_WITH(
        nlohmann::json::array().get<t>(),
        "json must be number, but is `[]`");
    REQUIRE_THROWS_WITH(
        nlohmann::json("1234").get<t>(),
        "json must be number, but is `\"1234\"`");
  }

  // iokit_hid_usage_page

  {
    using t = pqrs::osx::iokit_hid_usage_page;

    {
      t value1(i32);
      nlohmann::json json = value1;
      auto value2 = json.get<t>();
      REQUIRE(value1 == value2);
      REQUIRE(json.dump() == "1610612736");
    }

    REQUIRE_THROWS(nlohmann::json::array().get<t>());
    REQUIRE_THROWS_AS(
        nlohmann::json().get<t>(),
        pqrs::json::unmarshal_error);
    REQUIRE_THROWS_WITH(
        nlohmann::json().get<t>(),
        "json must be number, but is `null`");
    REQUIRE_THROWS_WITH(
        nlohmann::json(true).get<t>(),
        "json must be number, but is `true`");
    REQUIRE_THROWS_WITH(
        nlohmann::json::object().get<t>(),
        "json must be number, but is `{}`");
    REQUIRE_THROWS_WITH(
        nlohmann::json::array().get<t>(),
        "json must be number, but is `[]`");
    REQUIRE_THROWS_WITH(
        nlohmann::json("1234").get<t>(),
        "json must be number, but is `\"1234\"`");
  }

  // iokit_hid_vendor_id

  {
    using t = pqrs::osx::iokit_hid_vendor_id;

    {
      t value1(u64);
      nlohmann::json json = value1;
      auto value2 = json.get<t>();
      REQUIRE(value1 == value2);
      REQUIRE(json.dump() == "13835058055282163712");
    }

    REQUIRE_THROWS(nlohmann::json::array().get<t>());
    REQUIRE_THROWS_AS(
        nlohmann::json().get<t>(),
        pqrs::json::unmarshal_error);
    REQUIRE_THROWS_WITH(
        nlohmann::json().get<t>(),
        "json must be number, but is `null`");
    REQUIRE_THROWS_WITH(
        nlohmann::json(true).get<t>(),
        "json must be number, but is `true`");
    REQUIRE_THROWS_WITH(
        nlohmann::json::object().get<t>(),
        "json must be number, but is `{}`");
    REQUIRE_THROWS_WITH(
        nlohmann::json::array().get<t>(),
        "json must be number, but is `[]`");
    REQUIRE_THROWS_WITH(
        nlohmann::json("1234").get<t>(),
        "json must be number, but is `\"1234\"`");
  }

  // iokit_registry_entry_id

  {
    using t = pqrs::osx::iokit_registry_entry_id;

    {
      t value1(u64);
      nlohmann::json json = value1;
      auto value2 = json.get<t>();
      REQUIRE(value1 == value2);
      REQUIRE(json.dump() == "13835058055282163712");
    }

    REQUIRE_THROWS(nlohmann::json::array().get<t>());
    REQUIRE_THROWS_AS(
        nlohmann::json().get<t>(),
        pqrs::json::unmarshal_error);
    REQUIRE_THROWS_WITH(
        nlohmann::json().get<t>(),
        "json must be number, but is `null`");
    REQUIRE_THROWS_WITH(
        nlohmann::json(true).get<t>(),
        "json must be number, but is `true`");
    REQUIRE_THROWS_WITH(
        nlohmann::json::object().get<t>(),
        "json must be number, but is `{}`");
    REQUIRE_THROWS_WITH(
        nlohmann::json::array().get<t>(),
        "json must be number, but is `[]`");
    REQUIRE_THROWS_WITH(
        nlohmann::json("1234").get<t>(),
        "json must be number, but is `\"1234\"`");
  }
}
