#include<iostream>
using namespace std;
int main()
{ 
 
 /* What if enough memory is not available during runtime? 
 If enough memory is not available in the heap to allocate, 
 the new request indicates failure by throwing an exception
 of type std::bad_alloc, unless ​nothrow​ is used with the
 new operator, in which case it returns a NULL pointer */
 int *p = new(nothrow) int(25);
 if (!p){
     cout << "Memory allocation failed\n\n";
 }
 float *q = new float(75.25);
 char *c = new char('b');
 cout<<"Values at p , q and r are :"<<endl;
 cout<<*p<<" "<<*q<<" "<<*c;
 
 //erase everything from heap after new operation
 delete p;
 delete q;
 delete c;
 
 return 0;
}