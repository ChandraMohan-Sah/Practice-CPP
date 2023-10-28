#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        /*
       //Brute Approach -->0(n*n)
       vector<int> ans;
       
       for(int i=0; i<nums.size() ; i++){
           int count =0;

           for(int j=0; j<nums.size(); j++){
               if(j != i && nums[j]<nums[i]){
                   count++;
               }
           }
           ans.push_back(count);
       }
        return ans; 

        */
       
        //Brute Approach ---> 0(n*n);
        vector<int> result;
        for (auto it : nums)
        {
            int count = 0;
            for (auto jt : nums)
            {
                if (it > jt)
                    count++;
            }
            result.push_back(count);
        }
        return result;
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