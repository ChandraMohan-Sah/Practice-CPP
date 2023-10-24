/*
    Here's how it works:

    If the key is found in the map, mp.count(key) returns 1.
    If the key is not found in the map, mp.count(key) returns 0.

*/

#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> mp;

    mp[1] = "One";
    mp[2] = "Two";

    int key = 2;

    if (mp.count(key) > 0) {
        std::cout << "Key " << key << " exists in the map." << std::endl;
    } else {
        std::cout << "Key " << key << " does not exist in the map." << std::endl;
    }

    return 0;
}
