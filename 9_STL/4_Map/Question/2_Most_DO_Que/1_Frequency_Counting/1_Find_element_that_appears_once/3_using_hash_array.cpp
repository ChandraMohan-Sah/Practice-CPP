/*
    Considerations:
    1.Size of hash array should be equal to biggest number of nums array.
    2.Hashing of -ve number is a bit complecated ; this case is not handled here.
    3.Hasharray have limits ; Cannot be used if hash array size become > 10^7.

*/


#include<vector>
#include<iostream>
#include<climits>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int count;

        int maxi = INT_MIN;
        for(int i=0; i<n; i++){
            maxi = max(maxi, nums[i]);
        }
    
        int hash[maxi+1] = {0};

        for(int i=0; i<n; i++){
            hash[nums[i]] ++;
        }

        for(int i=0; i<n; i++){
            if(hash[nums[i]] == 1){
                return nums[i];
            }
        }

        return -1;
    }   

};

int main(){
    Solution obj;

    vector<int> nums = {8,1,2,2,1};
    //vector<int> nums = {-1};  -- not handled uing hashing.
    
    int  ans = obj.singleNumber(nums);

    cout <<ans;

    cout<<endl;
    return 0;
    
}
