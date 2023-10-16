#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string a[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven","Eight","Nine"};

    int n = 2345;

    int rev_num = 0;
    while (n > 0) { //Revers the number first
        rev_num = rev_num * 10 + n % 10;
        cout<<rev_num<<endl;
        n = n / 10;
    }

    cout<<"Final reversed number  : "<<rev_num<<endl<<endl;

    int rem;
    while (rev_num > 0) { //the start printing each digit from last
        rem = rev_num % 10;
        cout<<a[rem]<<" ";
        rev_num = rev_num / 10;
    }
    cout<<endl;

    return 0;
}