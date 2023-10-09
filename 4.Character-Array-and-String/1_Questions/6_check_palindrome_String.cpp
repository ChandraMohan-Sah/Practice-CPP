#include<iostream>
using namespace std;

int PrintLength(char ch[]){
    int count=0;
    for(int i=0; ch[i] !='\0' ; i++){
        count++;
    }
    return count;
}

void CheckPalindromeString(char ch[]){

    int first_index = 0;
    int last_index = PrintLength(ch) -1;
    bool flag =0;

    while(first_index<=last_index){
        if(ch[first_index] == ch[last_index]){
            first_index++;
            last_index--;
        }else{
            flag =1;
            break;
        }   
    }
    
    if(flag == 0){
        cout<<"Palindrom String"<<endl;
    }else{
        cout<<"Not a palindrome string"<<endl;
    }

}

int main()
{
    char ch[30];
    cin.getline(ch,16);

    CheckPalindromeString(ch);

    return 0;
}