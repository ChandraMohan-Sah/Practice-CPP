 /* 
 Note:
    1.Local Declaration of array size : 10^5  at max
    2.Global Declaration of array size : 10^7  at max
    3.When you Declare Global array size it must be constant (i.e) its ize cannot be changed after ward.

    Locally mero machine ramro xa bhana 10^6 pani chalxa 
    But normally in online platform it throws 
    Segmentation Fault

    Globally mero machine ramro xa bhana 10^8 pani chalxa 
    But normally in online platform it throws 
    Segmentation Fault

*/

#include<iostream>
using namespace std;

//Global Declaration
const int n=1e8;
int a[n];

int main()
{   
    /*This code throws Segmentation Fault : Locally Declararion
    int n=1e7;
    int a[n];
    a[n-1] = 7;
    cout<<a[n-1];
    */

    a[n-1] = 7;
    cout<<a[n-1];
    return 0;
}
