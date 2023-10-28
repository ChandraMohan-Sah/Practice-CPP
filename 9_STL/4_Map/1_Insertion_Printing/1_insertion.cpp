#include <iostream>
#include <map>
using namespace std;

// Printing key and values of map
template <typename S, typename T> //to accept any combination

void print(map<S, T> &m) {
    cout <<"Size of Map : "<< m.size() << endl;

    for (auto &pr : m) {
        cout << pr.first << " =>" << pr.second << endl;
    }
    cout<<endl;
}


int main() {

    //Inserting individual elements
    map<int, string> m;
    m[1] = "abc";
    m[4] = "cdc";
    m[3] = "acd";
    m[3] = "jkl";
    m.insert({2, "afg"});

    //Inserting using Range Based Loops.
    map<int, int> mp;
    for (int i = 5; i <= 10; i++) {
        mp[i] = i * 2;
    }

    //Inserting alphabet as key and ASCII code as value;
    map<char, int> alphabetMap;
    for (char c = 'a'; c <= 'z'; c++) {
        alphabetMap[c] = c - 'a' + 97;
    }


    //Inserting ASCII code as key and alphabet as value;
    map<int, char> alpha;
    for(int i=97; i<=122; i++){
        alpha[i] = char(i);
    }

    //Inserting Cipher Text and alphabet a---z


    print(m);
    print(mp);
    print(alphabetMap);
    print(alpha);

    return 0;
}
