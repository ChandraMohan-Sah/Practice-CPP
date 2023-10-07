/*
    Perform type casting to get address of charactere array.
*/

#include<iostream>
using namespace std;

int main()
{

    char ch = 'B';
    char *chptr = &ch;
    char a[] = "abcd";

    cout<< a << endl;
    cout<< &ch << endl;   
    cout<< chptr <<endl;

    cout<< (int *)a << endl;
    cout<< (int *)chptr <<endl; //Perform Typecasting

    return 0;
}
