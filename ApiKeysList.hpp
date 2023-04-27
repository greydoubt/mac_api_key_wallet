#ifndef ApiKeysList_hpp
#define ApiKeysList_hpp

#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include "ApiKey.hpp"

class ApiKeysList {
public:
    ApiKeysList();

    void addApiKey(const ApiKey& key);
    void removeApiKey(const std::string& name);
    void loadKeysFromFile(const std::string& filename);
    void saveKeysToFile(const std::string& filename) const;

private:
    std::vector<ApiKey> mKeys;
};

#endif /* ApiKeysList_hpp */
