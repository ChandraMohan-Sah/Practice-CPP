//Maximum of N numbers ( Eg. N=4 ;  12 -3 4 67  ;-->max is 67)

#include<iostream>
#include<climits> //to get least or max value of buckets
using namespace std;

int main()
{
    int i=0;
    int n;
    cin>>n; //How many number to take input
    
    int num;
    int largest = INT_MIN; //INT_MIN = -2^31  and INT_MAX = 2^31-1   --> since int has 32 bit 

    while(i<n){
        cin>>num;   //take input 
        if(largest < num)
            largest = num;

        i++; //updation
    }
    cout <<largest;

    return 0;
}