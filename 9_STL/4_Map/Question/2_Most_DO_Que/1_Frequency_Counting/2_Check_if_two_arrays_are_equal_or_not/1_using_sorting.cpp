/*
Time Complexity: O(N*log(N)) 
Auxiliary Space: O(1)
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long 

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B) {
        //code here
        
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        bool flag =0;
        
        if(A.size() != B.size()){
            return 0;
        }
        
        else{
            for(int i=0; i<A.size() ; i++){
                if(A[i] != B[i]){
                    flag =1;
                    break;
                }
                
            }
        }
        
        if(flag == 0){
            return 1;
        }else{
            return 0;
        }
    }
};

int main(){

    Solution obj;

    vector<ll> A = {1,2,5,4,0};
    vector<ll> B = {2,4,5,0,1};

    bool ans = obj.check(A,B);

    cout<<ans<<" "<<endl;
}