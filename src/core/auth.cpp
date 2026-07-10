#include "auth.hpp"
#include "../utils/common.hpp"

json login() {
  json userData;
  std::fstream file(FILE_USER_LIST);

  if (!file.is_open()) printf("File couldn't be open.");

  file >> userData;
  file.close();

  while (true) {
    std::string inputUsername, inputPassword;

    printf(CLEAR_TERMINAL"Login o/\nUsername : ");
    getline(std::cin, inputUsername);
    printf("Password : ");
    getline(std::cin, inputPassword);

    if (userData.contains(inputUsername)) {
      if (inputPassword.data() == userData[inputUsername]["Password"]) return userData[inputUsername];
    }

    printf("\nInvalid username or password!\n");
  }

  return json::object();
}
