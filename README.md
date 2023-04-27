# mac_api_key_wallet
mac (intel/arm) wallet for storing API keys in an quick to use interface


This implementation consists of three classes: ApiKey, ApiKeysList, and Main. 

ApiKey class contains information about a single API key, including its name, URL and the actual key.

ApiKeysList class contains a vector of ApiKeys and implements methods to add and remove ApiKeys, as well as to load and save the list of keys to a file. 

Main.cpp file contains the main function where we create an instance of ApiKeysList, load the previously saved keys from the file, add some test keys, remove one of the test keys, save the keys to the preferences file, and print out the remaining keys.

The implementation uses standard C++ libraries to read and write files, manipulate strings, and store data in vectors.
