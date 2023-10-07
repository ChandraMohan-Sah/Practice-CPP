#include<iostream>
using namespace std;

int main()
{
    bool flag =0;
    int i=2, n;
    cin >> n;

    while(i<n){
        if(n % i == 0){
            cout<<"Non-Prime Number";
            flag =1;
            break;
        }
        i++;
    }

    if(flag ==0){
        cout<<"Prime Number";
    }
    return 0;
}