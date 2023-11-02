#include<iostream>
using namespace std;

int main()
{   
    //static and pointer variable
    int *c;
    int d;
    cout<<"Size of  pointer variable  : "<< sizeof(c) <<endl;
    cout<<"Size of  integer variable : "<< sizeof(d) <<endl<<endl;



    //Static Mem allocation
    //Allocation + Deallocation Done by Compiler
    int b[20] = {0}; //4 bytes per int
    cout<<"Size of  array 'b' : "<< sizeof(b) <<endl;
    cout<<b<<endl<<endl; 
    //Here b cannot be overridden : Read Only Memory


    //Dynamic  Allocation (on the fly/runtime)
    int n;
    cout<<"Enter size of dynamic array : "<<endl;
    cin>>n;
    int *a = new int[n]{0};
    cout<<"Size of pointer variable 'a' : "<<sizeof(a)<<endl;
    cout<<a<<endl;

    //No Change
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    //Freeup the Space
    delete [] a;


    return 0;
}