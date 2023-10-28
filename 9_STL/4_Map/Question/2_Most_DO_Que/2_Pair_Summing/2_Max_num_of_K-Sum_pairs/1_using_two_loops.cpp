#include<vector>
#include<iostream>
using namespace std;


class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
       //Brute Approach
        int operations = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) { // Start from the next element to avoid rechecking pairs
                
                if (nums[i] + nums[j] == k) {
                    // Remove elements at positions i and j
                    nums.erase(nums.begin() + i);
                    nums.erase(nums.begin() + j - 1); // Adjust the index due to the removal of the previous element
                    operations++;
                    n = n-2; // Reduce the size of the vector by 2
                    i--;
                    break; // Move to the next i
                }
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

    cout<<"NUmber of operations : "<< ans<<" "<<endl;

    return 0;

}


