
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        int countWords(string list[], int n)
        {
           map<string, int> mp;
           
           for(int i=0; i<n; i++){
               mp[list[i]]++;
           }
           
           int counter =0;
           
           for(auto &pr : mp){
               if(pr.second == 2){
                   counter ++;
               }
           }
           
           return counter;
        }

};


//{ Driver Code Starts.
int main()
{
    string list[] = {"Tom", "Jerry", "Thomas", "Tom", "Jerry", "Courage", "Tom", "Courage"};

    int n= 8;
    Solution ob;    
    cout <<ob.countWords(list, n)<<endl;
    return 0;
}

