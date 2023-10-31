#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin); // Takes input from input.txt file
    freopen("output.txt", "w", stdout); // Output to file output.txt
    
    int x;
    
    //If the amount of data is unknown, the 
    //following loop is useful ; Take input from file .
    
    while(cin >> x) 
    {
        int square = x * x;
        cout << square << endl;
    }

    return 0;
}
