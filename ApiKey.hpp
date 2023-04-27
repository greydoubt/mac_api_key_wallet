#ifndef ApiKey_hpp
#define ApiKey_hpp

#include <string>

class ApiKey {
public:
    ApiKey(const std::string& name, const std::string& url, const std::string& key);

    std::string getName() const;
    std::string getUrl() const;
    std::string getKey() const;

private:
    std::string mName;
    std::string mUrl;
    std::string mKey;
};

#endif /* ApiKey_hpp */
