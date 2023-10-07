#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int odd_sum=0, even_sum=0;
    int tracker =1;
    int digit;

    while(n>0){

        digit = n %10;

        if(tracker %2 == 0){
            even_sum += digit;
            tracker++;

        }else{
            odd_sum +=digit;
            tracker++;

        }

        n /=10;
        
    }   

    cout<<"Sum of number at Odd place is "<<odd_sum<<endl;
    cout<<"Sum of number at Even place is "<<even_sum;
    return 0;
}