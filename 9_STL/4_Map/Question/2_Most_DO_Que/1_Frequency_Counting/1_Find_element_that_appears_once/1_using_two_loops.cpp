#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();

        for(int i=0; i<n ; i++){

            bool flag = 0;

            for(int j=0; j<n; j++){
                if(i!=j && nums[i] == nums[j]){
                    flag = 1;
                    break;
                }
            }

            if(flag == 0){
                return nums[i];
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
