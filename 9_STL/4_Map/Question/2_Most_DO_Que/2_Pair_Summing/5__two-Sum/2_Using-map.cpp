#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            int a = nums[i];
            int more = target-a;

            if(mp.find(more) != mp.end()){
                //if find func la last iterator return garako xaina bhana
                //it means next pair is found . so return that index

                return {mp[more], i};
            }
            else{
                mp[a] = i;  //else insert that element with its index to map.
            }
        }
        return {-1,-1};
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

