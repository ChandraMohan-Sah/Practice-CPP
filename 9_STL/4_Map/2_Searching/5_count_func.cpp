/*
	Easy method : it return value(0 or 1) insted of iterator.

    If the key is found in the map, mp.count(key) returns 1.
    If the key is not found in the map, mp.count(key) returns 0.

*/

#include <iostream>
#include <map>
using namespace std;

int main() {
    std::map<int, std::string> mp;

    mp[1] = "One";
    mp[2] = "Two";

    int key = 2;

    if (mp.count(key) > 0) {
        cout << "Key " << key << " exists in the map." << std::endl;
    } else {
        cout << "Key " << key << " does not exist in the map." << std::endl;
    }

    return 0;
}
