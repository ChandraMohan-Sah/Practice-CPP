/* Print Increasing NUmber */

#include<iostream>
using namespace std;

/*
    In your code, you have a temp variable that is initialized to 1 
    and is supposed to be used to keep track of the current number 
    to be printed. However, I never updated the temp variable, so 
    it stays at 1, and your base condition if (temp == n + 1) will 
    never be true.

//InCorrect Function
void PrintInc(int n){
    int temp =1;
    //Base Condition
    if(temp == n+1){
        return ;
    }

    //Recursive Condition
    int smallerans = temp+1; 
    return PrintInc(smallerans);

}

In this code, you are creating a new variable smallerans, 
but you never update the temp variable itself. Therefore, 
temp remains 1 in each recursive call, and the base condition 
if (temp == n + 1) is never satisfied.

*/


void IncreasingSequence(int n, int temp=1){
    //Base Case
    if(temp == n+1){
        return ;
    }

    //Print the output in each recursive call
    cout<<temp<<" ";

    //Recursive Case
    return IncreasingSequence(n, temp+1);
    //This return is not return type. 
    //It is return from TOS (top of stack)to (jasla bolako xa ) after executing sometask .
}


int main()
{
    int n;cin>>n;
    IncreasingSequence(n);
    return 0;
}