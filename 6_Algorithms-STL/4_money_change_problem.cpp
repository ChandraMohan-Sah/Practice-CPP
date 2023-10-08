/*
    Do it again.
*/

#include<iostream>
#include<algorithm>
using namespace std;

bool compare (int a , int b){
    return a<=b;
}

int main()
{   
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int n = sizeof(coins)/sizeof(int);

    int money ;
    cin >> money;

    while(money > 0){
        int index = lower_bound(coins, coins+n, money, compare ) - coins -1; //gives >= key. But to change to <=key used compare function
        cout<<"We would give exchange of coins "<< coins[index] <<endl;
        money = money - coins[index];    
    }

    return 0;
}


