#include<iostream>
using namespace std;

//Just Blue Print ---Equivalent to defining new data type 
class Car{
    int price;
    int model_no;
    char name[20];
};


int main()
{
    //create an object
    Car c; //it occupies some memory;

    Car arr[20]; //stores info about max 20 cars
    arr[0] = c;


    cout<< sizeof(c)<<endl;
    cout<< sizeof(Car)<<endl;

    return 0;
}