#include "../header.hpp"
#include "log/log.hpp"
#include <cstdint>
#include "client.hpp"

const std::vector menu = {"Home","Combat","Mining","Farming","Foraging","Fishing","Misc","Profile"};

void Client::start() {
  char input;

  printf("Welcome\n");
  for (int i = 0; i < menu.size(); i++) {
    printf("%-10s[%d]\n", menu[i], i);
  }
  scanf(" %c", &input);

  switch (input) {
    case '0': return Menu::home();
    case '1': return Menu::combat();
    case '2': return Menu::home();
    case '3': return Menu::home();
    case '4': return Menu::home();
    case '5': return Menu::home();
    case '6': return Menu::home();
    case '7': return Menu::home();
  };
}

void Client::showRuntime() {
  printf("Runtime : 1hr\n");
}

void Menu::home() {
  printf("Home pages");
}

void Menu::combat() {
  printf("Combat pages");
}
