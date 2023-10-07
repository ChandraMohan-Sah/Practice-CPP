/*
    Enter rows and column numbers :
    3 3

    Enter element for matrix : 
    1 2 3 
    4 5 6 
    7 8 9 

*/

#include<iostream>
using namespace std;

int main()
{   
    int r, c;
    cout<<"Enter rows and column numbers :"<<endl;
    cin>>r>>c;
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

    //print
    cout<<"Elements for 2D-matrix : "<<endl;
    for(int row=0; row<r; row++){
        for(int col=0; col<c; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
