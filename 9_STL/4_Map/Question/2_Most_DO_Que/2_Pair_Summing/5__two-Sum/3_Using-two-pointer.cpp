/*
    Not applicable to such que. But applicable to 
    question where we need to return only "yes present"
    or "Not present".

    As after sorting ; indexes value get interchanged.

*/

#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

class Solution {
public:

    bool twoSum(vector<int>& nums, int target) {
        
        //Using Two Pointer Apporoach Greedy
        int n = nums.size();
        int left =0 , right = n-1;
        
        //sort the array first 
        sort(nums.begin(), nums.end());

        while(left<right){
            int sum = nums[left] + nums[right];

            if(sum == target){
                return true;
            }
            else if(sum < target){
                left++;
            }
            else{
                right--;
            }
        }

        return  false;
    }
};

int main(){
    Solution obj;

    vector<int> nums = {2,7,11,15};
    int target = 9;

    bool ans = obj.twoSum(nums, target);

    if(ans){
        cout<<"Yes two Pair are present that meet the target value."<<endl;
    }
    else{
        cout<<"No such pair found."<<endl;
    }

    return 0;
}

