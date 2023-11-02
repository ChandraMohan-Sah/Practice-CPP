/*

Memory Allocation in c++;
    |
    |-->Data ---> Kept in Memory 
                        |-->Static/Compile Time Allocation
                        |-->Dynamic Allocation
*/

#include<iostream>
using namespace std;

int main()
{
    int x ;         //4 bytes
    char ch;        //1 bytes
    int arr[100];   // 400 bytes
    return 0;
}

/*
    1.Static / Compile Time Allocation 

    After Compilation :
    1) We have mapped Physical Address to Virtual Addresses.

    2) During Running Compiled Program (Run Time) : Reverse Mapping of Virtual
    Address to Physical Address is done.

    3) In static memory allocation , memory addresses are  predefined  (i.e) memory 
    spaces  cannot be increased or decreased later on during running a program.

    Advantage : Fast
    Disadvantage : Not flexible  

+-------------------------------+
|    RAM ==>Physical Memory     |
+--------            -----------+
|  let's say we need this       |
|  much space in RAM.           |
|  (100-402)                    |
|  +----------+---+---+--+---+  |
|  | 100 - 400|401|402|  |   |  |  
|  +----------+---+---+--+---+  |
+-------------------------------+
    |
    | {Mapping To virtual Memory ;
    |    after succesfull compilation}
    |
    V
+------------------+
| Virtual Address  |  ==> Physical Memory   
+------------------+

    Symbol Table in Virtual Memory.

    var   Mem-location
    +-----------+---+
    | arr|100 - 400 |   
    +---------------+
    |  x |  401 |
    +-----------+
    | ch |  402 |
    +-----------+

*/