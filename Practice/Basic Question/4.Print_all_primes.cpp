//Print All Primes From (1----->N) samma KO

#include<iostream>
using namespace std;

int main()
{
    int num, n;
    cin >>num;

    cout<<"List of All Prime numbers till "<<num<<" Are : "<<endl;

    for(int n=2; n<=num; n++){

        bool flag = 0;
        int i=2;
        while(i<n){
            if(n%i == 0){

                flag =1;
                break;
            }
            i++;
        }

        if(flag == 0){
            cout<<n<<"  ";
        }
    }
    
    return 0;
}