#include<iostream>
#include<string>
using namespace std;

int  StringToInt(string &s, int n){

    //base case
    if(n == 0){  //if length == 0 : do that;
        return 0;
    }

    //recursive case
    int digit = s[n-1] - '0';
    int smallerAns = StringToInt(s, n-1);
    int biggerans = smallerAns *10 + digit;
    return biggerans;
}


int main()
{   
    string s = "2345";
    int length = s.length();

    int ans = StringToInt(s, length);
    cout<<ans<<endl;
    cout<<ans+1<<endl; //To check; because integers can be simplified
    return 0;
}