#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

       //Brute Approach ---> 0(n*n);
        vector<int> result;
        for (auto i : nums)
        {
            int count = 0;
            for (auto j : nums)
            {
                if (i > j)
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