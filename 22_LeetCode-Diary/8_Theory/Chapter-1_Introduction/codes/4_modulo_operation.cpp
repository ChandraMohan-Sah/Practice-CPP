/*
GIven a number N. Print its Factorial
Constraints
1 <= N <= 100

Print answer Module M
where M = 47 {any prime number -lets say}

A % M always gives value Less then M.

Practice Here : https://www.geeksforgeeks.org/modulo-1097-1000000007/#practice

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int M = 47;

    long long fact = 1;
    for(int i=2; i<=n; i++){
        fact = (fact * i ) % M;
    }

    cout<<fact;
    return 0;
}