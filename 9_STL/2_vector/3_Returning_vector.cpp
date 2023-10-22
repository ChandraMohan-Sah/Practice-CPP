/* 
    Shuffle the Array <---> Leetcode 

    Example 1 :
    Input: nums = [2,5,1,3,4,7], n = 3
    Output: [2,3,5,4,1,7] 
    Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 
                then the answer is [2,3,5,4,1,7].

*/


#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        
        int i=0;
        for(int j=n; j<2*n; j++){
            ans.push_back(nums[i]);
            i++;
            ans.push_back(nums[j]);
        }

        /* OR
        int i=0, j=n;

        while(i<n && j<2*n){
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i++;
            j++;
        }
        */

        return ans;
    }
};


int main(){
    Solution obj;

    vector<int> nums = {2,5,1,3,4,7};
    int n = (nums.size()/2);

    vector<int> ans = obj.shuffle(nums, n);

    for(auto it: ans){
        cout<<it<<" ";
    }

    return 0;
}