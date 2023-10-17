#include<iostream>
using namespace std;

int Factorial(int n){
    //base case
    if  (n ==1 ){
        return 1;
    }

    //hypothesis

    //induction : Actual Implementation to make hypothesis work
    return n*Factorial(n-1);

}


int main()
{
    int n=4;
    int ans =Factorial(n);
    cout<<ans;
    return 0;
}