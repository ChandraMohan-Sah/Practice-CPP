/*
    1. Sort Lexiograghically :Ascending Sort

    2. Sort By Descending Order

    3. Sort by length of string


    INPUT: 
    ------------------------------------------
    | "apple" | "mango" | "banana" | "grapes" |   --->Each string can be accessed by index as character array
    ------------------------------------------

    OUTPUT1 : Sort Lexiograghically
    ------------------------------------------
    | "apple" | "banana" | "grapes" | "mango" |   
    ------------------------------------------

    OUTPUT2 : Sort By Descending Order
    ------------------------------------------
    | "mango" | "grapes" | "banana" | "apple" |   
    ------------------------------------------

    OUTPUT3 : Sort By Length : if same size sort Lexiographically
    ------------------------------------------
    | "banana" | "grapes" | "apple" | "mango" |   
    ------------------------------------------

see video
*/


#include<iostream>
#include<algorithm>
#include<string>        // Include the <string> header for string manipulation
using namespace std;

    /*---------------For Lexicographical And Descending_Sort---------------*/

        bool compareBYStrings(string a, string b) {
            //return a < b; // Use the '<' operator to compare strings lexicographically
            return a > b; // Use the '>' operator to sort in descending order
        }

        void Lexicographical_AND_Descending_Sort(string s[], int size) {
            sort(s, s + size, compareBYStrings); 
            for (int i = 0; i < size; i++) {
                cout << s[i] << " ";
            }
            cout<<endl<<endl;
        }


    /*--------------- Sort According To Length -----------------------------*/
    
        bool compareBYLen(string a, string b){
            if(a.length() == b.length()){
                return a <b ;
            }
            return a.length () > b.length(); //Jasko thulo length xa tesko barama True return garr
        }

        void Sort_BY_Length(string s[], int size) { //This function is same as Lexicographical_AND_Descending_Sort() function
            sort(s, s + size, compareBYLen); 
            for (int i = 0; i < size; i++) {
                cout << s[i] << " ";
            }
            cout<<endl<<endl;
        }


    /*---------------------- Main Function ----------------------------------*/

    int main() {
        int n;
        cin >> n;

        cin.ignore(); // Consume the newline character left in the input buffer

        string s[100];
        for (int i = 0; i < n; i++) {
            getline(cin, s[i]);
        }


        Lexicographical_AND_Descending_Sort(s, n);
        Sort_BY_Length(s,n);

        return 0;
    }
    /*-------------------------------------------------------------------------*/
