// 0    1   1   2   3   5   8   13  21 ............ Fibonacci Sequence

#include<iostream>
using namespace std;

void Fibonacci(){
    int n;
    cin>>n;

    int a = 0, b = 1;
    cout<<a<<"\t"<<b<<"\t";

    int i=3;
    while(i<=n){
        int ans = a +b;
        cout<<ans<<"\t";
        a = b;
        b=ans;
        i++;
    }
    cout<<endl;
}

int main()
{      
    Fibonacci();
    return 0;
}