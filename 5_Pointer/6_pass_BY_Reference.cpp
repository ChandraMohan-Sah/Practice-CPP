/*
    It avoids copying of data again and again.
    
*/

#include<iostream>
using namespace std;

void Update(int *a){
    *a = *a +1;
    cout<<"Inside Function : "<< (*a)<<endl;

}

int main()
{
    int x =10;
    cout<<"Before Update  : "<< x <<endl;
    Update(&x);

    cout<<"After Update  : "<< x <<endl;
    return 0;
}
