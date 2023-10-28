#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result =0;
        
        for(int num : nums){
            result = result ^ num;
        }

        return result;

        /* OR
        int i=0;
        int ans=0;

        while(i<n){
            ans = (ans ^ nums[i]);
            i++;
        }
        return ans; 

        */
    }   

};

int main(){
    Solution obj;

    vector<int> nums = {8,1,2,2,1};
    int  ans = obj.singleNumber(nums);

    cout <<ans;

    cout<<endl;
    return 0;
    
}
