
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        int countWords(string list[], int n)
        {
           //code here.
            unordered_set<string>  st; // To keep track of counted words
            int ans =0;
            
            for(int i=0; i<n; i++){
                
                if(st.find(list[i]) == st.end()){  // Skip words that have already been counted
                    int count = 1;
                    
                    for(int j=0; j<n; j++){ 
                        if(i==j) continue;
                        
                        if(list[i] == list[j]){
                            count++;
                            st.insert(list[i]);
                        }
                    }
                    
                    if(count == 2){
                        ans++;
                    }
                        
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

