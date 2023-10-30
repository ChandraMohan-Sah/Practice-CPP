#include<iostream>
#include<string>
using namespace std;

int main()
{       
    //push_back('character')
    string a={"Happy Happy "};
    a.push_back('D');
    a.push_back('A');
    a.push_back('Y');

    //concatenation
    a= a + "  : Shyam";
    cout<<a<<endl;

    //pop_back()
    a.pop_back();
    cout<<a<<endl;



    //Check Palindrome String or Not : Using Extra Space
    cout<<endl<<"-----------Palindrome Check ---------"<<endl;
    string str;
    cin>>str;
    string str_rev;

    //take input for str_rev string
    for(int i=str.size()-1 ; i>=0; i--){
        str_rev.push_back(str[i]);
    }

    if(str == str_rev){
        cout<<"Yes Palindrome";
    }else{
        cout<<"NO Not a Palindrome";
    }



    //Check Palindrome String or Not : Without Extra Space
    cout<<endl<<"-----------Palindrome Check ---------"<<endl;

    bool flag = 0;
    int n = str.size();
    int half = n/2;

    int i=0, j=n-1;
    while(i<half){
        if(str[i] == str[j]){
            i++;
            j--;
        }else{
            flag =1;
            break;
        }

    }
    if(flag == 0){
        cout<<"Yes Palindrome";
    }else{
        cout<<"NO Not a Palindrome";
    }

    return 0;
}

