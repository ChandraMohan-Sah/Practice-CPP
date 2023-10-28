/*
    Set stores Unique values only. Here we storing unique list.


*/

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>> st; //to store unique list
        int n = nums.size();

        for(int i=0; i<n-2; i++){

            for(int j=i+1; j<n-1; j++){

                for(int k=j+1; k<n; k++){

                    if(nums[i] + nums[j] + nums [k] == 0){
                        vector<int> temp = {nums[i], nums[j], nums[k]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp); //store each unique vector
                    }
                }
            }
        }

        vector<vector<int>> ans(st.begin(), st.end());
        return ans;

    }
};


int main(){
    Solution obj;

    vector<int> nums = {-1,0,1,2,-1,-4};
    int target = 9;

    vector<vector<int>> ans = obj.threeSum(nums);

    for(auto i : ans){
        for(auto j : i){
            cout<< j<<",";
        }
        cout<<endl;
    }

    return 0;
}

