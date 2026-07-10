#include "core/auth.hpp"
#include "core/app.hpp"

int main() {
  json user = login();

  Client amadeus(user);

  amadeus.start();
  return 0;
}
