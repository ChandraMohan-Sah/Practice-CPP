/*
When to Perform Stack operation????

 Note : You just need to keep Condition for 
        '('  and 
        ')' character :
        Rest lai just keep iterating.
        
        Aru character xa (like a, b, d , * , -)
        Bhana donot perform any operation on it.

One Observation:
    This Works Man ...

    if(condition){

    }else if(condition){

    }

    //Do not need to keep else condition at end.

*/

#include<iostream>
#include<stack>
using namespace std;


bool isbalanced(char s[]){
    stack <char> stk;

    for(int i=0; s[i] !='\0'; i++){
        char ch = s[i];

        if(ch == '('){
            stk.push(ch);
        }
        else if(ch == ')'){
            if(stk.empty() or stk.top() != '('){
                return false;
            }
            stk.pop();
        }
    }

    // return stk.empty() ? true : false ;
    return stk.empty();
}


int main()
{
    char s[100] = "((a+b)-(c+d))";

    if(isbalanced(s)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}




