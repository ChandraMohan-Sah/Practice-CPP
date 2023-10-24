/* SUMMARY

    1.Initialization :----> string var = "value"; //3 more other approaches
    2.Find Length of string ----> var.length()
    3.Accessing elements   -------> cout, using loop
    4.Update the String -------->string s = "abc"; s="Updated";
    5.Concatenation     --------> var1 = var1 + var2

    6.Find a particular word  -----> var.find("put_word_to_be_searched")
    7.delete/erase in string  -----> var.erase(starting_index, length_of_that_word)

*/


#include<iostream>
using namespace std;

int main()
{
    
    //  Initialization
    string s = "Hello World";   //1st Approach
    string s1(s) ;      //2nd Approach
    string s2 = s1;     //3rd Approach
    char a[] = "Using Char Array Initialize String"; //4th Approach
    string s3(a);
    cout<<endl<<"String values are : "<<endl;


    //  Accessing elements
    /* 1st Approach */
    cout<<s<<endl;    
    cout<<s1<<endl;    
    cout<<s2<<endl; 
    cout<<s3<<endl; 

    /* 2nd Approach */
    for(int i=0; i<s.length(); i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;

    //Update the String s
    s =" This is updation of string s";
    cout<<s<<endl; 

    //Concatenation of strings
    string x = "Hello ";
    string y = "Learning Strings";
    cout<<endl<<x<<endl; 
    cout<<y<<endl; 

    x += y;
    cout<<"After concatenation : "<<x<<endl<<endl;

    //Find a particular word inside string
    s =" This is updation of string s";
    string word = "updation";

    cout<<"'updation' word starts at index : "<<s.find(word)<<" in string s."<<endl;

    //delete/erase in string 
    word = "This";
    int index = s.find(word); //finds starting index of word
    s.erase(index, word.length()+1); //delete from starting indx to length of that word
                                     //+1 to delete add one more letter
    cout<<endl<<s;
    return 0;
}