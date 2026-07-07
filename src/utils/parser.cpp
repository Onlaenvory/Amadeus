#include "../../vendor/nlohmann/json.hpp"
#include <string_view>

using json = nlohmann::json;

#define USER_LIST "user_lists/userlist.json"



static json parse(std::string_view files){
  std::fstream file(files.data());
  json userData;

  if (!file.is_open()) return 0;

  file >> userData;
  file.close();

  return userData;
}
