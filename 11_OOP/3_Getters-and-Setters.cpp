/*

//Access Modifier : Private, Public adn protected

//Getter and Setter to allow control over private data members .
    

*/

#include<iostream>
using namespace std;

//Just Blue Print ---Equivalent to defining new data type 
class Car{

private: 
    float price;

public:
    int model_no;
    char name[20];

    //Members
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


    float get_price(){
        return price;
    }

};

int main()
{
    //create an object
    Car c,d,e; //it occupies some memory;

    //c.price = 100; cannot read or write private  mem outside class
    c.set_price(-100);
    c.model_no  = 112;
    c.name[0] = 'B';
    c.name[1] = 'M';
    c.name[2] = 'W';
    c.name[3] = '\0';


    c.print();


    return 0;

}