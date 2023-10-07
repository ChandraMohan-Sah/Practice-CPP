#include<iostream>
using namespace std;

int main()
{
    char ch;
    cin>>ch;

    //Print for : N: North, S: South, E: East   
    //default West

    //Must check ...What happens if break is not kept ??
    switch(ch){
        case 'N':
            cout<<"North"<<endl;
            break;
        
        case 'S':
            cout<<"South"<<endl;
            break;

        case 'E':
            cout<<"East"<<endl;
            break; 

        default:
            cout<<"West"<<endl;

    }
    return 0;
}
