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


    // Finding the smallest key
    map<int,string>::iterator it = m.begin();
    cout << "Smallest key: " << it->first << " => " << it->second << std::endl;


    cout<<endl<<"Using Iterator."<<endl;   
    for(auto it = m.begin(); it !=m.end() ; it++){
        cout<<(*it).first<<"  "<< it->second<<endl;  
    }


    cout<<endl<<"Reverse Print."<<endl; 
    for(auto it = m.rbegin(); it !=m.rend() ; it++){
        cout<<(*it).first<<"  "<< it->second<<endl;  
    }

    //use range Based loop insted
    cout<<endl<<"Using Range Based Loops."<<endl;
    for(auto &it : m){
        cout<<it.first<<"  "<< it.second<<endl;
    }

    return 0;
}