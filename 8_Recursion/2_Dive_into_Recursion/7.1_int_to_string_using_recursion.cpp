#include<iostream>
using namespace std;

string a[] ={"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven","Eight","Nine"};

void IntToString(int n ){
    //Base case
    if(n == 0){
        return ;
    }

    //recursive case
    int rem = n %10;
    IntToString(n/10); //first call function then print , 
                        //so that actual number is printed insted of revere number.
    cout<<a[rem]<<endl;
    
}

int main()
{
    int n = 2048;
    IntToString(n);
    return 0 ;
}