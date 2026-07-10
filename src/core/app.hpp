#pragma once
#include "../vendor/nlohmann/json.hpp"

using json = nlohmann::json;

class Client
{
  private:
    json user;
  public:
    Client(const json& p_user) : user(p_user) {};
    void start();
    void showHome();
    json getUser () const;
};
