/*
    Time Complexity: O(N) 
    Auxiliary Space: O(N)
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

class Solution{
    public:

    bool check(vector<ll> A, vector<ll> B) {

        unordered_map <int,int> mp1, mp2; 
        for(int it : A){
            mp1[it]++;
        }
        
        for(int it : B){
            mp2[it]++;
        }
        
        //compare the frequency
        for(auto it = mp1.begin(); it != mp1.end(); it++){
            //If frequency not same return false
            if(mp2[it->first]!= it->second){
                return 0;
            }
        }
        
        return 1;
    }
};

int main(){

    Solution obj;

    vector<ll> A = {1,2,5,4,0};
    vector<ll> B = {2,4,5,0,1};

    bool ans = obj.check(A,B);

    cout<<ans<<" "<<endl;
}

