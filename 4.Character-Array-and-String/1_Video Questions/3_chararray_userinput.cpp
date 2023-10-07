//delimiter are simple terminating character  like '\0' , '$' ...

#include<iostream>
using namespace std;

void ReadLine(char array[], char delimiter){
    int i=0;
    char ch = cin.get(); //puts elements of i/p buffer to char ch (single element at once)
                        //automatically value gets updated after each input

    while(ch != delimiter){
        array[i] = ch; //puts value of ch charracter inside  array a[]
        i++;
        ch = cin.get();
    }
    array[i]='\0'; //Append null char at end after coming out of loop
    
}


int main()
{
    /*1st approach--> Using cin: it ignores character after whitespace

    char a[14];
    cout<<"Input Character array Value : "<<endl;
    cin>>a;cout<<endl<<"Output of character array a using cin:"<<endl;
    cout<<a<<endl;

    */

    /*2nd approach--> Using cin.get() method: it keeps elements of input buffer inside char array. */
                                         //   unless triggered some condition like '\n' char.
        
    char array[100];
    ReadLine(array, '\n');

    cout<<endl<<"Output of character array: array[] using cin.get():"<<endl;
    cout<<array<<endl;

    /*3rd approach --> cin.getline() 

        see  4_userinp_cingetline.cpp code
    */
    
    return 0;
}