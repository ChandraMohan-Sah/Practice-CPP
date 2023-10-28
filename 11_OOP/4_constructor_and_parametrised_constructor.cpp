/*
-Some Special Functions that  C++ CLases give you when you create a class/object.
-4 different special functions that are always present inside a class.
-Note: When you have different function of same name , it 
       is called Function overloading.

1.Constructor
    - For creating an object
    - gets called automatically and only once.
    - Override : Define a func that has same name as class name.
    - For any object only one constructor is called.
    - Parametrised Constructor
    - Constructor Overloading --> multiple Constructor inside same class with same name.


2.Copy Contructor
    - make a copy of given object
    - By default i present like : Car d(e);
    - When Overriding Copy Constructor, it must be passed by reference.

# Why pass by reference ?
->



3.Copy Assignment Operator


4.Destructor



*/

#include<bits/stdc++.h>
using namespace std;

//Just Blue Print ---Equivalent to defining new data type 
class Car{

    private: 
        float price;

    public:
        int model_no;
        char name[20];

        //Constructor- called for n-object automatically
        Car(){
            cout<<"Inside Car Constructor"<<endl;
        }

        //Parametrized Contructor
        Car(float p, int m, char *n){
            price = p;
            model_no = m;
            strcpy(name,n);
        }

        //Copy Constructor 
        Car(Car &x){
            cout<<" Copy Constructor "<<" ";
            price  = x.price;
            model_no = x.model_no;
            strcpy(name , x.name);
        }

        // Member function : has access to private member as well.
        void print(){
            cout<<"Car Name : "<<name<<endl;
            cout<<"Model no : "<<model_no <<endl;
            cout<<"Price : "<<price<<endl<<endl;
        }


        //Getter and Setter to allow control over private data members .
        float set_price(float p){
            float msp = 111;
            if(p > 0){
                price = p;
            }
            else{
                price = msp;
            }
            return price;
        }

        //NOt used yet : as print() func have access to Private data members to get price value.
        float get_price(){
            return price;
        }

};

int main()
{
    //create an object
    Car c; //makes a call to the constructor function present inside class.


    Car d(222, 333,"Audi");  //since two constructor is present specify while declaration 
    d.print();

    Car e(d); //copy constructor OR //Car e =d;
    e.set_price(456); // override price 
    e.print();


    //c.price = 100; cannot read or write private  mem outside class ---GOOD feature
    c.set_price(-100);
    c.model_no  = 112;
    c.name[0] = 'B';
    c.name[1] = 'M';
    c.name[2] = 'W';
    c.name[3] = '\0';

    c.print();

    return 0;
}










