#include "core/app.hpp"
#include "../utils/parser.cpp"
#include <string>

json Client::login() {
  std::string inputPassword;
  std::string inputUsername;
  std::fstream file("user_lists/userlist.json");
  json userData;
  if (!file.is_open()) exit(0);

  file >> userData;
  file.close();

  printf("Username : ");
  std::getline(std::cin, inputUsername);
  printf("Password : ");
  std::getline(std::cin, inputPassword);

  if (userData.contains(inputUsername)) {
    if (inputPassword.data() == userData[inputUsername]["Password"]) return userData[inputUsername];
    else printf("Incorrect Password");
  }

  return json::object();
}

void Client::start() {
  json user;
  user = login();
  printf("Home Pages %s", user["Password"].get<std::string>().data());
}
