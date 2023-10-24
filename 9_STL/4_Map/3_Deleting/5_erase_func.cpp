#include<iostream>
#include<map>
using namespace std;

void print(map<int, string> & m){
    cout<<"Size of map : "<<m.size()<<endl;
    for(auto &c : m){
        cout<<c.first<<" "<<c.second<<" "<<endl;
    }
}

int main()
{   
    map<int, string> mp;

    mp[1] = "apple";
    mp[2] = "Papaiya";
    mp[3] = "Gauva";
    mp[4] = "Grapes";
    mp[5] = "Banana";

    print(mp);

    auto it = mp.find(5); //search key 5: if found then returns iterator pointing to that value.
    if(it != mp.end()){
        mp.erase(it);
    }

    cout<<endl<<"After Erasing key-value pair containing 5 as key."<<endl;
    print(mp);

    return 0;
}


