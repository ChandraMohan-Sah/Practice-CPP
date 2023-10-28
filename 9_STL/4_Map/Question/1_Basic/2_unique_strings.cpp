/*
    Given N string, print unique strings in lexiographical order with their
    frequecy.

    N <= 10^5
    |S| <= 100000 ; S--> size of string

*/

#include<iostream>
#include<map>
#include<fstream>
using namespace std;

int main(){
    map<string, int> mp;
    int n;

    ifstream inputFile("input.txt"); 

    if (inputFile.is_open() != 1) {
        cout << "Error opening the input file." << endl;
        return 1;
    }

    // Read the number of strings from the input file : like cin>>n;
    inputFile >> n;

    for(int i = 0; i < n; i++){
        string s;
        inputFile >> s;  //like cin >> s'

        mp[s]++;
    }


    for(auto pr : mp){
        cout << pr.first << " " << pr.second << endl;
    }

        inputFile.close();
    return 0;
}



/* Equivalence:

cin>> ; inputFile>>; to take input from file
cout>> ; outputFile>>;

*/