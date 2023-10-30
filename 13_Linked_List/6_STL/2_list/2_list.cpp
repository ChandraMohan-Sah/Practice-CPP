#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;
    
    //Initialize 
    list<int > l1{1,2,3,10,8,5};

    //Different Datatype
    list<string> l2{"apple", "guava", "mango", "banana", "pineapple"};


    //sort
    l2.sort(); //list items has randomly kept ... So it has its own sorting method.

    
    //reverse
    l2.reverse();

    //Iterate over the list and print the data
    for(string s: l2){
        cout<<s<<" --->";
    }cout<<endl;

    //remove 
    //pop_front();
    cout<<l2.front()<<endl;
    l2.pop_front();

    //add to the front of the list
    l2.push_front("kiwi");

    //remove last element
    cout<<l2.back()<<endl;
    l2.pop_back();

    //Iterate over the list and print the data
    for(string s: l2){
        cout<<s<<" --->";
    }cout<<endl;

    //Can use iterator as well
    for(auto it = l2.begin(); it != l2.end(); it++){
        cout<< (*it) <<" ";
    }cout<<endl;

    cout<<"-----------------------------------------------------"<<endl;
    l2.push_back("orange");
    l2.push_back("lemon");

    for(string s: l2){
        cout<<s<<" --->";
    }cout<<endl<<endl;    

    //remove a fruit by value
    // string f;
    // cout<<"Enter element name to remove from list :  ";
    // cin>>f;
    // l2.remove(f);
    // for(string s: l2){
    //     cout<<s<<" --->";
    // }cout<<endl; 

    //We can delete elements at specific position
    auto it = l2.begin();
    it++;
    it++;
    l2.erase(it); //deleting 3rd element
    for(string s: l2){
        cout<<s<<" --->";
    }cout<<endl; 

    //we can insert elements at specific position
    it = l2.begin();
    it++;
    l2.insert(it, "FruitJuice"); //insert at 2nd pos
    for(string s: l2){
        cout<<s<<" --->";
    }cout<<endl; 


    return 0;
}



