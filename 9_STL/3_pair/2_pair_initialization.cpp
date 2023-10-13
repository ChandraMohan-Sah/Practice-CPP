#include<iostream>
using namespace std;

int main()
{
    pair <int,string> p , q, r, s_array[3];
    cout<<endl;

    //using make_pair function
    p  = make_pair(2, "Chandramohan Sah");
    cout<<p.first << " ";
    cout<<p.second << " "<<endl;

    //using curly_braces
    q = {100, "Aakash"};
    cout<<q.first << " ";
    cout<<q.second << " "<<endl;

    //using individual item
    r.first = 25;
    r.second ="Hari Krishna";
    cout<<r.first << " ";
    cout<<r.second << " "<<endl;

    //For array of pairs
    cout<<"Enter 3 values for array of pair : "<<endl;
    for(int i=0; i<3; i++){
        cin>> s_array[i].first >> s_array[i].second;
    }    
    
    for(int i=0; i<3; i++){
        cout<< s_array[i].first <<endl<< s_array[i].second;
    }

    return 0;
}