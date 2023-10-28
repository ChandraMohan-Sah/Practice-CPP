#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }

        // return count <= 1;
        if(count>1){
            return false;
        }else{
            return true;
        }
    }
};

int main(){

    Solution obj;

    vector<int> A = {3,4,5,1,2};
    bool ans = obj.check(A);

    if(1){
        cout<<"Sorted and Rotated."<<" "<<endl;
    }else{
        cout<<"Not Sorted or Rotated."<<" "<<endl;
    }
}



