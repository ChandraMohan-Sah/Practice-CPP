#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin >>n;

    int i=2;
    bool flag =0;
    while(i<n){            ///Optimal approach : while(i<sqrt(n)) .... greater then value of sqrt(n) will be multiple of smaller number 
        if(n%i==0){
            cout<<"Non-Prime"<<" ";
            flag =1;
            break;
        }
        i++;
    }

    if(flag == 0){
        cout<<"Prime Number" <<" ";
    }

    return 0;
}