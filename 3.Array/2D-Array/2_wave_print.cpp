/*
    1 2 3 
    4 5 6 
    7 8 9 

    Enter rows and column numbers :
    3 3

    Enter element for matrix : 
    147
    852
    369
*/

#include<iostream>
using namespace std;

int main()
{   
    int r, c;
    cout<<"Enter rows and column numbers :"<<endl;
    cin>>r>>c;
    int n=r, m=c;
    int arr[r][c]; //Write this after u get input of r , c .Or, else garbage value get stored in it.
    cout<<endl;

    int val=1;
    
    for(int row=0; row<r; row++){
        for(int col=0;col<c; col++){
            //cin>>arr[row][col];
            arr[row][col] =val;
            val++;
        }
    }

    //wave-print
    cout<<"Wave Print for matrix : "<<endl;
    for(int col =0; col<c; col++){
        if(col%2 == 0){
            for(int row=0; row<r; row++){
                cout<<arr[row][col]<<" ";
            }
        }else{
            for(int row=r-1; row>=0; row--){  //Think for n element ; last index is always (n-1) ; Since starting index is 0;
                cout<<arr[row][col]<<" ";
            }           
        }
        cout<<endl;
    }

    return 0;
}