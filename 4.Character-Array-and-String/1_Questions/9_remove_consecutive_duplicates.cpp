//Use Two Pointer Approach

#include<iostream>
using namespace std;

/* 1st approach
void RemoveDuplicate(char ch[]){
    int i=0, j=1; //iterator

    while(ch[i] != '\0'){
        if(ch[i] != ch[j]){
            j++;
            i++;
        }

        while(ch[i] == ch[j]){
            j++;
        }
        
        ch[i+1] = ch[j];
    }
    cout<<ch<<endl;
}
*/

int PrintLength(char ch[]){
    int count=0;
    for(int i=0; ch[i] != 0; i++){
        count ++;
    }
    return count;

}

// 2nd Approach --Efficient Approach
void RemoveDuplicate(char ch[]){
    int len = PrintLength(ch);
    int i=0, j=1;

    while(i<len){
        if(ch[i] != ch[j]){
            i++;
            ch[i] = ch[j];
        }
        j++;
    }
    cout<<ch<<endl;

}



int main()
{

    char ch[100];
    cin.getline(ch,20);
    RemoveDuplicate(ch);
    return 0;
}