#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;


class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
       //Better Approach
        sort(nums.begin(), nums.end());
        int count = 0;

        int i = 0;
        int j = nums.size()- 1;

        while(i<j) {
            if(nums[i] + nums[j] > k) {
                j--;
            } else if(nums[i] + nums[j] < k) {
                i++;
            } else {
                count++;
                i++;
                j--;
            }
        }
        return count;
    }
};


int main(){

    Solution obj;

    vector<int> nums = {3,1,3,4,3};
    int k = 6;
    int ans = obj.maxOperations(nums,k);
    cout<<"Number of operations : "<< ans<<" "<<endl;

    return 0;
}




