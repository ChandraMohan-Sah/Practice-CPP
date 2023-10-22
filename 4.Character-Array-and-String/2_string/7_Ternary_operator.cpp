/*
    Defanging an IP Address --LeetCode

Input: address = "255.100.50.0"
Output: "255[.]100[.]50[.]0"

*/

#include<iostream>
#include<string>
#include<limits.h>

using namespace  std;

string defangIPaddr(string address) {

        string defangIP;
        int j=0;

        // characters of the string
        for (char c : address)
         (c == '.') ? defangIP += "[.]" : defangIP += c;

    return defangIP;
}


int main(){

    string address = "1.1.1.1";
    string ans = defangIPaddr(address);
    cout<<ans<<"  ";
    return 0;
}
