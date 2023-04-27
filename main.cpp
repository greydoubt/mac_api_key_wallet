#include <iostream>
#include "ApiKeysList.hpp"

int main(int argc, const char * argv[]) {
    ApiKeysList apiKeysList;
    apiKeysList.loadKeysFromFile("api_keys.txt");

    // Add some test keys
    apiKeysList.addApiKey(ApiKey("My Provider", "https://api.myprovider.com", "key1"));
    apiKeysList.addApiKey(ApiKey("Another Provider", "https://api.anotherprovider.com", "key2"));

    // Remove a test key
    apiKeysList.removeApiKey("My Provider");

    // Save the keys to the preferences file
    apiKeysList.saveKeysToFile("api_keys.txt");

    // Print out the remaining keys
    for (const ApiKey& key : apiKeysList.getKeys()) {
        std::cout << "Name: " << key.getName() << "\n";
        std::cout << "URL: " << key.getUrl() << "\n";
        std::cout << "Key: " << key.getKey() << "\n\n";
    }

    return 0;
}