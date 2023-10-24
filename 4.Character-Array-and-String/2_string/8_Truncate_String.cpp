/*
Input: s = "Hello how are you Contestant", k = 4
Output: "Hello how are you"



string_name.substr(0, index_till_you_want_to_print)

*/

#include<iostream>
#include<string>
#include<limits.h>

using namespace  std;

class Solution {
public:
    string truncateSentence(string s, int k) {
        int count =0;
        int sub_index = -1;

        for(int i=0; i<s.length(); i++){
            if(s[i] == ' '){
                count++; //counts the white space
            }
            if(count == k){
                sub_index = i; //keeps track of where i have reached
                break;
            }
        }
        
        if(sub_index < 0){
            return s;
        }else
        {
            return s.substr(0, sub_index);
        }
    }

};


int main(){

    Solution obj;
    string  s = "Hello how are you Contestant";
    int k = 4;

    string ans = obj.truncateSentence(s,k); 
    cout<<ans<<" "<<endl;
    return 0;

}