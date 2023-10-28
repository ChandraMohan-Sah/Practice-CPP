//Understanding Bubble and Merge Sort

#include<iostream>
#include<algorithm>
#include<ctime>
using namespace std;


void BubbleSort(int arr[], int n){

    for(int i=0; i<=n-2; i++){ //kati patak inner loop chalnu paryo
        for(int j = 0; j<=n-2; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

}


int main()
{       
    int n, key;
    cin>>n;

    int arr[1000000];


    time_t start = clock();
    BubbleSort(arr, n); //I think Array is always passed by reference
    time_t end = clock();
    cout<<"Bubble Sort "<< end-start<<endl;


    //Reverse the array
    for(int i=0; i<n; i++){
        arr[i] = n-i;
    }

    start = clock();
    sort(arr, arr+n); //I think Array is always passed by reference
    end = clock();
    cout<<"Merge Sort "<< end-start<<endl;

    return 0;
}