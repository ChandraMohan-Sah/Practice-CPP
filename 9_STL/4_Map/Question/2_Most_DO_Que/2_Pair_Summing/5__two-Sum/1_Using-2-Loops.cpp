#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans;
        for(int i=0; i< nums.size(); i++){
            for(int j=0; j< nums.size(); j++){
                if(i==j) continue; 

                //Why use of continue ?
                //[3,2,4] ; target = 6;
                //At i=j=0 ; 3+3=6 ; But its mistake.

                if(nums[i] + nums[j] == target){ 
                    ans.push_back(i);
                    ans.push_back(j);
                    i++;
                    break;
                }
            }

        }

        return ans;
    }
};

int main(){
    Solution obj;

    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> ans = obj.twoSum(nums, target);

    for(auto it : ans){
        cout<<it<<" ";
    }

    return 0;
}

