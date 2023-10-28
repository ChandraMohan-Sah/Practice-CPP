
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        int countWords(string list[], int n)
        {
            int ans = 0;
            bool counted[n] = {false}; // To keep track of counted words
    
            for (int i = 0; i < n; i++) {
                if (counted[i]) {
                    continue; // Skip words that have already been counted
                }
    
                int count = 1;
                for (int j = 0; j < n; j++) {
                    if(i==j) continue;
                    
                    if (list[i] == list[j]) {
                        count++;
                        counted[j] = true; // Mark the word as counted
                    }
                }
    
                if (count == 2) {
                    ans++;
                }
            }
    
            return ans;
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

