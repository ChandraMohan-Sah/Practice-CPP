#include<iostream>
using namespace std;

long long int Factorial(int n){
    int ans = 1;
    while(n != 1){    // 4! = 4 * 3 * 2 * 1
        ans = ans *n;
        n=n-1;
    }
    return ans;
}


int main()
{   
    int n;
    cin>>n;

    long long int ans = Factorial(n);
    cout<<"Factorial of "<<n<<" is : "<<ans;
    
    return 0;
}

