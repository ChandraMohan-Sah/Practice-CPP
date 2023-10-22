#include <iostream>
using namespace std;

int fibo(int n){

    //base case
    if(n == 0 || n==1){
        return n;
    }

    //Recursive Case
    return fibo(n-1) + fibo(n-2);
}


void printFibo(int n, int i = 0) {
    //base case
    if(i==n){
        cout << fibo(i) << " "; 
        return;
    }

    //recursive case
    cout << fibo(i) << " "; //e.g fibo(7) is 13.
    printFibo(n, i + 1);

}



int main() {
    int n;
    cout << "Enter the number of terms in the Fibonacci sequence: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer.";
    } else {
        cout << "Fibonacci Sequence: ";
        printFibo(n);
    }

    return 0;
}
