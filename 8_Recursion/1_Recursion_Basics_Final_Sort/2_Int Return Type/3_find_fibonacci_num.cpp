/*  Fibonacci Sequence
        0, 1, 1, 2, 3, 5, 8, 13, 21....
index : 0  1  2  3  4  5  6   7   8 .....

*/

#include<iostream>
using namespace std;

int fibonacci(int n){

    /*---------Base case------------*/
    if(n == 0 || n==1){
        return n;
    }

    /*---------Recursive Case----------*/
    // f(n) = f(n-1) + f(n-2);
    int smallerans1 = fibonacci(n-1);
    int smallerans2 = fibonacci(n-2);
    int largeans = smallerans1 + smallerans2;
    // return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{   
    int n;cin>>n;
    int ans = fibonacci(n);
    cout<<"Fibonacci of f("<<n<<") is : "<<ans<<endl;
    return 0;
}
