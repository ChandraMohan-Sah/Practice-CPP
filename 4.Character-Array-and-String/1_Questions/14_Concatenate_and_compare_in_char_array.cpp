/*
Suppose you have two strings:

case1: Concatenation
________________________

Input
string1[] ="Hello"
string2[] ="World"

Output
HelloWorld

case2: Comparision
_________________________

Input1
string1[] ="Hello"
string2[] ="Hello"

Output
1 ----> means are equal
0 -----> not equal strings

*/


#include<iostream>
using namespace std;


int PrintLength(char ch[]){
    int count =0;
    for(int i=0; ch[i] != 0; i++){
        count++;
    }
    return count;

}

void Compare(char string1[], char string2[]){
    int len_string1 = PrintLength(string1); //find length pof each string
    int len_string2 = PrintLength(string2);

    bool flag=0;    //counter check

    if(len_string1 == len_string2){ //if not equal simply reject that strings are not equal
        int i=0;
        while(string1[i] != '\0'){  //You can take  string2[i] != '\0' as well . As both are equal
            if(string1[i] == string2[i]){
                i++;
            }else{
                flag =1;
                break;
            }
        }

    }else{
        flag =1;
    }

    if(flag == 1){
        cout<<"Not Equal String"<<endl;
    }else{
        cout<<"Equal String "<<endl;
    }

}

void Concatenate(char string1[], char string2[]){

    int len_string1 = PrintLength(string1);

    int j=0;
    while(string2[j] != '\0'){
        string1[len_string1] = string2[j];
        len_string1++;
        j++;
    }
    cout<<"String After Concatenation : "<<string1<<endl;
}


int main()
{
    char string1[50];
    cin.getline(string1, 30);

    char string2[50];
    cin.getline(string2, 30);

    Compare(string1, string2);
    Concatenate(string1, string2);
    
    return 0;
}