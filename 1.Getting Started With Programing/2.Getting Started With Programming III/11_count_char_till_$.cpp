#include<iostream>
using namespace std;

int main()
{
    char ch;
    int count =0;
    while(ch!='$'){
        cin>>ch;
        count++;
    }

    cout<<"Number of characters is : "<<count<<endl;
    return 0;
}

//---------------cin.get() doesn't check which character it is pointing to ------------------
/*

int main(){
    char ch;
    int count = 0;

    while(ch != '$'){
        ch = cin.get();
        count++;
    }
    count<<"Number of character is: "<<count<<endl;
    return 0;
}



*/