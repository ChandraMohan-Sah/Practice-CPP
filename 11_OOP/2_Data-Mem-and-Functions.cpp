/*
    Class -----Data members
            |--Functions  related to that object
            |--Example - Update Price
                    - Total cars

    //Data members of data type Car
    +---------+
    | Price   |  c.price = 100;
    +---------+
    | model   |  c.model = 112;
    +---------+
    | name    |  c.name[0] = 'BMW';
    +---------+


    //Access Modifier : Private, Public

*/

#include<iostream>
using namespace std;

//Just Blue Print ---Equivalent to defining new data type 
class Car{
public:
    float price;
    int model_no;
    char name[20];

    //Member-function
    void print(){
        cout<<"Car Name : "<<name<<endl;
        cout<<"Model no : "<<model_no <<endl;
        cout<<"Price : "<<price<<endl;
    }

    float get_discounted_price(float x){
        return price*(1.0-x);
    }

    float apply_discount(float x){
        price = price * (1.0 -x);
        return price;
    }
};

int main()
{
    //create an object
    Car c,d,e; //it occupies some memory;

    c.price = 100;
    c.model_no  = 112;
    c.name[0] = 'B';
    c.name[1] = 'M';
    c.name[2] = 'W';
    c.name[3] = '\0';

    //try to print using dot operator
    // cout<<"Car Name : "<<c.name<<endl;
    // cout<<"Model no : "<<c.model_no <<endl;
    // cout<<"Price : "<<c.price<<endl;

    c.print();

    cout<<"Enter the discount you want to give ";
    float discount;
    cin>>discount;
    cout<<"Final Price : "<<c.apply_discount(discount);


    return 0;

}