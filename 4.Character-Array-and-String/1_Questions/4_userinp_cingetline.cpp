/* Inbuilt Function insted of cin.get() method is :

cin.getline(argument1, argument2)

argument1 : it  holds arry name to point to 
            1st element of character array

argument2 : Number of elements you want to enter at maximum

*/
#include<iostream>
using namespace std;

int main()
{
    char a[50];
    cin.getline(a, 10);
    cout<<a<<endl;
    return 0;
}