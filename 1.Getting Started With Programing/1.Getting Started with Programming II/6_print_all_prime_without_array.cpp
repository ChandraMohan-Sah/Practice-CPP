#include<iostream>
using namespace std;

int main()
{

    int n, num;
    cin >>n; // lets say if n=10 .It prints prime number till 10 i.e 2,3,5,7


    for(int num =2; num <n; num++){  // This loop to check each num if prime or not

        // logic to check if num prime or not
        bool flag =0;
        for(int i=2; i <num; i++ ){ 
            if(num % i == 0){
                flag=1;
                break;
            }
        }

        // print num if num is prime
        if(flag == 0){
            cout<<num<<" ";
        }
    }


    return 0;
}