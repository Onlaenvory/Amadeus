#include "feature.hpp"

void Utils::Fishing() {
  printf("Fishing pages");

  for (int i = 0; i < 20; i++) {
    printf("Option %d\n", i);
  }
}

void Utils::profile(const Client& cli) {
  std::string password = cli.getUser()["Password"].get<std::string>();
}
