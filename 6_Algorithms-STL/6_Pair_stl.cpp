/*
   1. pair : To hold two values together and they can have any datatype;

   2. syntax : pair<datatype1, datatype2> p;

   3. To store three values : pair<datatype1,pair<datatype1, datatype2> > p;

*/


#include<iostream>
using namespace std;

int main()
{   
    /*1st approach  

    pair<int, int> p;
    p.first = 10;
    p.second = 101;
    cout<<"First Value : " << p.first <<endl;
    cout<< "Second Value : "<< p.second <<endl; */

    /*2nd approach

    pair<string, int> p;
    p = make_pair("BMW", 42);
    cout<<"First Value : " << p.first <<endl;
    cout<< "Second Value : "<< p.second <<endl; */


    //3rd Approach
    pair<string, pair<float, int>> p;
    p.first = "Farari";
    p.second.first = 234.56;
    p.second.second = 45;

    cout<<p.first<<endl;
    cout<<p.second.first<<endl;
    cout<<p.second.second<<endl;
    
    


    return 0;
}