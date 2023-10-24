/*
    The find function returns an iterator : 
        that points to the element with the key if 
        it exists in the map or the end() iterator if the key is not found.
*/
#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m[6] = "a";

    auto it = m.find(3);

    if( it == m.end()){
        cout<<"No value Found.";
    }
    else{
        cout<<it->first<<"  "<< (*it).second<<" "<<endl;
    }

    return 0;
}