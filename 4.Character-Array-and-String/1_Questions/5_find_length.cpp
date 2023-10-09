#include<iostream>
#include<string>
using namespace std;

int PrintLength(char ch[]){
    int count=0;
    for( int i=0; ch[i] != '\0'; i++){
        count++;
    }
    return count;
}


int main()
{
    char ch[30];

    cin.getline(ch, 20);
    int length = PrintLength(ch);
    cout<<length<<endl;

    /*2nd Approach : using strlen(argument1) function*/
    
    return 0;
}