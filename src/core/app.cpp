#include "app.hpp"
#include "core/feature.hpp"
#include "../utils/common.hpp"

void Client::start() {
  printf(CLEAR_TERMINAL"Welcome to Amadeus, @Channel\n");
  showHome();
}

void Client::showHome() {
  std::string input;

  while (true) {
    printf("Menu\nFishing [1]\n");
    getline(std::cin, input);

    switch (input[0]) {
      case '1' : Utils::Fishing();
      case '2' :
      default : break;
    }
  }
}

json Client::getUser() const {
  return user;
}
