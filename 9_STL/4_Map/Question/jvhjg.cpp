/* 
    Number of Good Pairs---Leetcode

    Example 1:
    Input: nums = [1,2,3,1,1,3]
    Output: 4
    Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.

    Hint:
    If 3 elements are the same, how many pairs satisfying the above criteria 
    would exist? Do you remember the maths classes? 
    It would be 3C2 = 3!/2!*1! .

    nCr = n!/(r! * (n-r)!)
    for r = 2 ; i.e pair
    nC2 = n!/(r! * (n-r)!) = n*(n-1) /2 ;
  */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums){
        unordered_map<int, int> ans;
        int count = 0;

        for (auto it : nums) {
            ans[it]++; //it holds actual value not index.
        }

        for (auto it : ans) {
            int value = it.second;
            int each_ans = (value * (value - 1) / 2);
            count += each_ans;
        }

        return count;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 3, 1, 1, 3, 4, 5, 1};

    int answer = obj.numIdenticalPairs(nums); //passing nums vector to method inside class

    cout << "Number of identical pairs: " << answer << endl<<endl;

    return 0;
}
