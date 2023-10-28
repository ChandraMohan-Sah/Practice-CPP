#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;


class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
       //Better Approach
        int operations = 0;
        unordered_map<int, int> mp;

        for (int num : nums) {
            int rem = k - num;
            
            // Check if the rem exists in the map and has freq greater than 0
            if (mp[rem] > 0) {
                operations++;
                mp[rem]--; // Decrease the freq of that element
            } else {
                mp[num]++; // Add the current number to the map
            }
        }

        return operations;

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




