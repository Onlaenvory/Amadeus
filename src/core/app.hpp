#pragma once
#include "../../vendor/nlohmann/json.hpp"

using json = nlohmann::json;

namespace Client {
  json login();
  void start();
};
