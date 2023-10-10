#include<iostream>
using namespace std;

/*Print Array Recursively without loop*/

void PrintSorted(int arr[], int n, int index = 0) {
    // Base Case: If the array is empty or we've printed all elements
    if (n == 0 || index == n) {
        return; //to main function :who called this function
    }

    // Print the current element : Output
    cout << arr[index] << " ";

    // Recursive Case: Print the rest of the sorted array
    PrintSorted(arr, n, index + 1);
}


int main() {
    int arr[] = {12, 34, 56, 78, 98, 5};
    int n = sizeof(arr) / sizeof(int);

    // Sort the array (you can use any sorting algorithm)
    // Here, I'm using bubble sort for simplicity
    for(int i=0; i<=n-2; i++){
        for(int j = 0; j<=n-2; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    // Call the recursive function to print the sorted array
    PrintSorted(arr, n);

    return 0;
}
