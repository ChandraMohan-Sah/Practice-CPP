#include<vector>
#include<iostream>
#include<map>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mp;

        for(auto n: nums){
            mp[n]++;
        }

        for(auto &it: mp){
            if(it.second == 1){
                return it.first;
            }
        }

    return -1;
    
    }   

};

int main(){
    Solution obj;

    vector<int> nums = {8,1,2,2,1};
    int  ans = obj.singleNumber(nums);

    cout <<ans;

    cout<<endl;
    return 0;
    
}
