#include <boost/ut.hpp>
#include <pqrs/osx/iokit_types/extra/nlohmann_json.hpp>

namespace {
using namespace boost::ut;

template <typename t>
void exception_test(void) {
  try {
    nlohmann::json().get<t>();
    expect(false);
  } catch (pqrs::json::unmarshal_error& ex) {
    expect(std::string("json must be number, but is `null`") == ex.what());
  } catch (...) {
    expect(false);
  }

  try {
    nlohmann::json(true).get<t>();
    expect(false);
  } catch (pqrs::json::unmarshal_error& ex) {
    expect(std::string("json must be number, but is `true`") == ex.what());
  } catch (...) {
    expect(false);
  }

  try {
    nlohmann::json::object().get<t>();
    expect(false);
  } catch (pqrs::json::unmarshal_error& ex) {
    expect(std::string("json must be number, but is `{}`") == ex.what());
  } catch (...) {
    expect(false);
  }

  try {
    nlohmann::json::array().get<t>();
    expect(false);
  } catch (pqrs::json::unmarshal_error& ex) {
    expect(std::string("json must be number, but is `[]`") == ex.what());
  } catch (...) {
    expect(false);
  }

  try {
    nlohmann::json("1234").get<t>();
    expect(false);
  } catch (pqrs::json::unmarshal_error& ex) {
    expect(std::string("json must be number, but is `\"1234\"`") == ex.what());
  } catch (...) {
    expect(false);
  }
}
} // namespace

void run_nlohmann_json_test(void) {
  using namespace boost::ut;
  using namespace boost::ut::literals;

  "nlohmann_json"_test = [] {
    uint64_t u64 = 13835058055282163712ull; // 2^63 + 2^62

    // iokit_hid_location_id

    {
      using t = pqrs::osx::iokit_hid_location_id::value_t;

      {
        t value1(u64);
        nlohmann::json json = value1;
        auto value2 = json.get<t>();
        expect(value1 == value2);
        expect(json.dump() == "13835058055282163712");
      }

      exception_test<t>();
    }

    // iokit_keyboard_type

    {
      using t = pqrs::osx::iokit_keyboard_type::value_t;

      {
        t value1(u64);
        nlohmann::json json = value1;
        auto value2 = json.get<t>();
        expect(value1 == value2);
        expect(json.dump() == "13835058055282163712");
      }

      exception_test<t>();
    }

    // iokit_registry_entry_id

    {
      using t = pqrs::osx::iokit_registry_entry_id::value_t;

      {
        t value1(u64);
        nlohmann::json json = value1;
        auto value2 = json.get<t>();
        expect(value1 == value2);
        expect(json.dump() == "13835058055282163712");
      }

      exception_test<t>();
    }
  };
}
