#include<iostream>
using namespace std;

void WavePrint(int **arr , int r, int c){

    int row, col;
    //wave-print
    cout<<"Wave Print for matrix : "<<endl;

    for( col =0; col<c; col++){
        if(col%2 == 0){
            for(int row=0; row<r; row++){
                cout<<arr[row][col]<<" ";
            }
        }else{
            for( row=r-1; row>=0; row--){
                cout<<arr[row][col]<<" ";
            }           
        }
        cout<<endl;
    }
}

int main()
{   
    int r, c;
    
    cout<<"Enter rows and column numbers :"<<endl;
    cin>>r>>c;
    int n=r, m=c;
    
    // Create a dynamic 2D array and initialize it
    int **arr = new int*[r];
    for (int i = 0; i < r; i++) {
        arr[i] = new int[c];
    }
    
    int val = 1;
    
    for(int row=0; row<r; row++){
        for(int col=0;col<c; col++){
            arr[row][col] = val;
            val++;
        }
    }


    WavePrint(arr, r, c);

    // Free the dynamically allocated memory
    for (int i = 0; i < r; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    
    return 0;
}
