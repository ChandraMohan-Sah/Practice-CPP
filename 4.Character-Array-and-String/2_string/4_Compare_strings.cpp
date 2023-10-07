/* SUMMARY

    1.1st Approach--->Using simple comparator operator '>','<','=='
    2.2nd Approach--->Using string1.comapare(string2) frunction
        |
        |---> if s1 == s2 ---> 0 
        |---> if s1 < s2 ---> -ve value (like -15)
        |---> if s1 > s2 ---> +ve value (like +15)

*/



    
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1 = "Hello";
    string s2 = "World";

    // getline(cin,s);
    // cout<<"Output is : "<<s<<endl;

    /*1st Approach---->Using simple comparator operator '>','<','=='*/
        if(s1<s2){
            cout<<" s1 is smaller then s2"<<endl;

        }else if(s1>s2){

            cout<<" s2 is smaller then s1"<<endl;
        }else{

            cout<<" s1 is equal to s2"<<endl;
        }


    /*2nd Approach---Using var.comapare(arg) frunction->Using */
        cout<<endl<<endl<< s1.compare(s2)<<endl;
        if(s1.compare(s2) < 0){
            cout<<" s1 is smaller then s2"<<endl;

        }else if(s1.compare(s2) > 0){

            cout<<" s2 is smaller then s1"<<endl;
        }else{

            cout<<" s1 is equal to s2"<<endl;
        }
    return 0;

}
