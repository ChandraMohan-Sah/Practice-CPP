
#include<vector>
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        vector<int> arr=nums;
        unordered_map<int, int> map1;

        sort(arr.begin(),arr.end());

        for(int i=0;i<arr.size();i++){
            if(map1.find(arr[i]) == map1.end()){
                map1[arr[i]]=i;
            }
        }

        for(int i=0;i<nums.size();i++){
            nums[i] = map1[nums[i]];
        }
        return nums;
 
    }

};


int main(){
    Solution obj;

    vector<int> nums = {8,1,2,2,3};
    vector<int> ans = obj.smallerNumbersThanCurrent(nums);

    for(auto &it : ans){
        cout<<it<<" ";
    }

    cout<<endl;
    return 0;
    
}