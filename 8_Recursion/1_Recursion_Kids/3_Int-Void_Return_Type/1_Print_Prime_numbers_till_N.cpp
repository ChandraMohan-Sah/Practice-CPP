#include<iostream>
using namespace std;

bool CheckPrime(int n){
    if(n ==2){
        return true ;
    }

    int i=2;
    while(i<n){           
        if(n%i==0){
            return false;
        }
        i++;
    }
    return true;
}


void PrintPrime(int n){
    //base case
    if (n <= 1) {
        return;
    }

    //recurive case
    PrintPrime(n - 1);
    if (CheckPrime(n)) {
        cout << n << " ";
    }
}


int main()
{
    int n=10;
    PrintPrime(n);
    return 0;
}