#include "../src/header.hpp"
#include "../../vendor/nlohmann/json.hpp"

using json = nlohmann::json;

void parseUserList() {
    // 1. Open the file relative to your project root running directory
    std::ifstream file("UserLists/userlist.json");

    // Check if the file actually opened properly
    if (!file.is_open()) {
        std::cerr << "Failed to open userlist.json! Check your working directory." << std::endl;
        return;
    }

    try {
        // 2. Parse the file stream straight into a json object
        json data = json::parse(file);

        // 3. Look up your keys and values
        std::string userKey = "User 1";

        if (data.contains(userKey)) {
            std::string username = data[userKey]["Username"];
            std::string password = data[userKey]["Password"];

            std::cout << "--- Parsing Success ---" << std::endl;
            std::cout << "Key: " << userKey << std::endl;
            std::cout << "Username: " << username << std::endl;
            std::cout << "Password: " << password << std::endl;
        } else {
            std::cout << "Key '" << userKey << "' not found in JSON." << std::endl;
        }

    } catch (const json::parse_error& e) {
        // This catches any syntax errors inside your userlist.json file
        std::cerr << "JSON Parse Error: " << e.what() << std::endl;
    }
}
