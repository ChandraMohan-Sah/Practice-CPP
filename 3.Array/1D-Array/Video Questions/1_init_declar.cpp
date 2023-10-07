#include<iostream>
using namespace std;

int main()
{   
    /*
        int arr[10];  correct array declaration
        
        int arr[ ];    incorrect array declaration

        But if initilized instantly 

        int arr[] = {2, 45, 67, 234}; correct ho
    */


    /*------------- Initialization -------------*/

    /* 1st Approach ---Brute -- You can assign less elements then allocated memory  */
        int arr[10] = {100, 40, 24, 23};

        int n = sizeof(arr)/sizeof(int);
        
        for(int i=0; i<n; i++){
            cout<<arr[i]<<"\t";
        }
        cout<<endl<<endl;



    /* 2nd Approach ---Efficient Approach   */
        cout<<"2nd Approach ---Efficient Approach "<<endl;

        int array[100];
        cout<<"Enter number of elements to enter (Max:100 ): ";
        int n;
        cin>>n;

        for(int i=0; i<n; i++){
            cin>>array[i];
        }

        for(int i=0; i<n; i++){
            cout<<array[i]<<"\t";
        }
        cout<<endl;



    /* 3rd Approach -- Using Dyanamic Memory allocation */

        int num; 
        cout << "Enter the number of elements: ";
        cin >> num;

        // Dynamically allocate memory for an integer array of size n
        int *arra = new int[num];

        /* Check if memory allocation was successful
        In C++, when memory allocation using new fails, it returns a nullptr (which is equivalent to NULL in older versions of C++) */ 
        
        if (!arra) { //if(arr == nullptr)
            cout << "Memory allocation failed!" << endl;
            return 1;
        }

      
        cout << "Enter " << num << " integers:" << endl;
        for (int i = 0; i < num; i++) {
            cin >> arra[i];
        }

       
        cout << "You entered:" <<endl;
        for (int i = 0; i < num; i++) {
            cout << arra[i] << " ";
        }

        delete[] arra;// Release the allocated memory

    return 0;
}