/*
Find Largest String out of N strings

    Input:
    N=3

    Hello 
    Hello World
    Coding

    Output
    Hello World
    11

Hint : 

*/

#include<iostream>
using namespace std;

int PrintLength(char ch[]){ //for finding length of each string
    int count =0;
    for(int i=0; ch[i] != '\0'; i++){
        count++;
    }
    return count;
}

void CopyString(char temp[], char ch[], int length){
    for(int i=0; i<length; i++){
        temp[i] = ch[i];     // Copy string from ch to temp 
    }
}


int main()
{
    char ch[100];
    int n;
    cin>>n;

    cin.ignore();

    int a; //temporarily store length of string
    int longest_string_length = 0; 

    char temp[100]; 
    for(int i=0; i<n; i++){
        cin.getline(ch, 20); //input for each string
        a = PrintLength(ch);

        if(a >longest_string_length){ 
            longest_string_length = a ;  // stores length of longest string 
            CopyString(temp, ch, longest_string_length); //copy longest string in temp array
        }
    }


    cout<<"Longest value of string is :"<<longest_string_length<<endl; 
    cout<<"Longest String is :  "; 
    cout<<temp<<endl;

    return 0;
}

/*  Buckets Used 

----------------------------------------------------------------------------------------
|       |       |       |       |       |       |       |       |       |       |       | -------> ch[] Bucket to store each string 
----------------------------------------------------------------------------------------

----------------------------------------
|   H   |   e   |   l   |   l   |   o   |  -------> temp[] Bucket to Store Longest string
----------------------------------------

----
| 8 |  --- longest_string_length Bucket to store length of longest string
----

*/

