#include "ApiKeysList.hpp"

ApiKeysList::ApiKeysList() {}

void ApiKeysList::addApiKey(const ApiKey& key) {
    mKeys.push_back(key);
}

void ApiKeysList::removeApiKey(const std::string& name) {
    mKeys.erase(std::remove_if(mKeys.begin(), mKeys.end(),
        [&](const ApiKey& key) { return key.getName() == name; }), mKeys.end());
}

void ApiKeysList::loadKeysFromFile(const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string name, url, key;
        if (std::getline(std::getline(iss, name, ','), url, ',') && std::getline(iss, key)) {
            mKeys.emplace_back(name, url, key);
        }
    }
}

void ApiKeysList::saveKeysToFile(const std::string& filename) const {
    std::ofstream file(filename);
    for (const ApiKey& key : mKeys) {
        file << key.getName() << "," << key.getUrl() << "," << key.getKey() << "\n";
    }
}
