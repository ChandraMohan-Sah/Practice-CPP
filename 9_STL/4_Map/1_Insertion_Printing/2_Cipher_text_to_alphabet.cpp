#include<iostream>
#include<map>
using namespace std;

void print(map<char,char> &m) {
    cout <<"Size of Map : "<< m.size() << endl;

    for (auto &pr : m) {
        cout << pr.first << " =>" << pr.second << endl;
    }
    cout<<endl;
}



int main()
{
    map<char, char> cipherToalpha;
    string cipherText = "A quick brown fox jumps over the lazy dog";

    for(char &c : cipherText){
        if( c != ' '){
            char x = 'a' + tolower(c) -'a';
            cipherToalpha[c] = x ;
        }
    }

    print(cipherToalpha);
    return 0;
}

