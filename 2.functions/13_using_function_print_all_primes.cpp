#include<iostream>
using namespace std;

bool Prime(int num){ //While using bool ...return should be in form of true or false ...dont use 0 or 1 ..
    if(num<=1){
        return false;
    }

    int i=2;
    while(i<num){   //logic to check prime
        if(num%i == 0){
            return false;
        }
        i++;
    }
    return true;
}

int main()
{   
    int n; //check for n inputs
    cin>>n;

    int num=1;
    cout<<"Prime numbers from 1 to given number are :"<<endl;
    while(num<=n){  // 1 ...n   i/p
        bool ans = Prime(num);
        if(ans ==  true){
            cout<<num<<"\t";
        }
        num++;
    }
    cout<<endl<<endl;
    return 0;
}


