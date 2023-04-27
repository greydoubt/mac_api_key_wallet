#include "ApiKey.hpp"

ApiKey::ApiKey(const std::string& name, const std::string& url, const std::string& key) :
    mName(name), mUrl(url), mKey(key)
{}

std::string ApiKey::getName() const {
    return mName;
}

std::string ApiKey::getUrl() const {
    return mUrl;
}

std::string ApiKey::getKey() const {
    return mKey;
}
