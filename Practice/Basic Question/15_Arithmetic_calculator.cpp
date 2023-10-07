#include<iostream>
using namespace std;

int main()
{
    char ch ;
    float n1, n2;
    float result;

    while(1){
        cin>>ch;
        switch(ch){
            case '+':
                cin>>n1>>n2;
                result = n1 + n2;
                cout<<"Sum is "<<result<<endl;
                break;


            case '-':
                cin>>n1>>n2;
                result = n1 - n2;
                cout<<"Difference  is "<<result<<endl;
                break;

            case '*':
                cin>>n1>>n2;
                result = n1 * n2;
                cout<<"Product  is "<<result<<endl;
                break;

            case '/':
                cin>>n1>>n2;
                result = n1 / n2;
                cout<<"Answer is "<<result<<endl;
                break;

            case 'x':
                return 0;

            default:
                cout<<" Invalid operator . Enter another operator "<<endl;
                cout<<"Enter 'x' to exit from calculator"<<endl;
                continue;
        }

    }


    return 0;
}