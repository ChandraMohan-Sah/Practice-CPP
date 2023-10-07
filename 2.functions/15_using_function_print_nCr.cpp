#include<iostream>
using namespace std;

long long int Factorial(int n){
    int ans =1;

    while(n != 1){
        ans = ans * n;
        n = n-1;
    }
    return ans;
}

long long int Permutation(int fact1, int fact2, int fact3){
    return (fact1/(fact2*fact3));
}

int main()
{
    int n;
    cin>>n;

    int r;
    cin>>r;


    long long int fact1 = Factorial(n);
    long long int fact2 = Factorial(r);
    long long int fact3 = Factorial(n-r);

    long long int ans = Permutation(fact1, fact2, fact3);

    cout<<"Permutation of given number is "<<ans<<endl<<endl;
    
    return 0;
}