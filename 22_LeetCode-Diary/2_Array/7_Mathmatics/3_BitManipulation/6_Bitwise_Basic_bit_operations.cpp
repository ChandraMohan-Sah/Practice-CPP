/* 
SUMMARY

2.Check ith bit :(check i=2nd bit is : 0 or 1)
        Process:
        number: 0101 (lets say 5)
        mask  : 0100 (1<<i)
        boo ans2 = (number & mask ) = 0100

    if (certain value +ve | -ve) == ith bit is '1'
    if (0) == ith bit is '0'


3.Set ith Bit : (set i=3rd bit equal to 1)
        Process:
        number: 0101 (lets say 5)
        mask  : 1000 (1<<i)  
        int  ans3 = (number | mask ) = 1101  
    return ans 

4.Clear ith Bit : (clear i=2nd bit equal to 0)
        Process:
        number: 0101 (lets say 5)
        mask  : 0100 (1<<i)
        ~mask : 1011  
        int  ans4 = (number & (~mask) ) = 0 0 0 1
    return ans 
*/


#include<iostream>
using namespace std;
 

bool Check_ith_Bit(int n, int i){
    int mask = 1<<i;
    return (n&mask);
}

int Setith_Bit(int n, int i){ //just make ith bit =1 . No user input
    int mask = 1<<i;
    return (n|mask); 
}

int Clearith_Bit(int n, int i){ //just make ith bit =0 . No user input
    int mask = 1<<i;
    return (n & (~mask)); 
}


int main()
{
    int n;
    cin>>n;
    
    int ith_bit = 2;
    bool ans2= Check_ith_Bit(n,ith_bit);
    if(ans2){
        cout<<ith_bit<<"nd bit is 1."<<endl;
    }else{
        cout<<ith_bit<<"nd bit is 0."<<endl;
    }

    //Set ith bit
    int ith_bits =3; 
    cout<<"Before Set N : "<<n<<endl;
    int ans3 = Setith_Bit(n, ith_bits);
    cout<<"After Set N : "<<ans3<<endl;

    //Clear ith bit
    int ith_bitts =2;
    cout<<"Before Clear N : "<<n<<endl;
    int ans4 = Clearith_Bit(n, ith_bitts);
    cout<<"After Clear N : "<<ans4<<endl;


    return 0;
}
