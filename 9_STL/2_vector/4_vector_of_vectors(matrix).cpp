/*
Richest Customer Wealth --Leetcode

Input: accounts = [[1,5],[7,3],[3,5]]
Output: 10
Explanation: 
1st customer has wealth = 6
2nd customer has wealth = 10 
3rd customer has wealth = 8
The 2nd customer is the richest with a wealth of 10.

*/

#include<iostream>
#include<vector>
#include<limits.h>

using namespace  std;

int maximumWealth(vector<vector<int>>& accounts) {
        //vector of vector

        int maximum = INT_MIN;
        int sum;

        for(int i=0; i< accounts.size() ; i++){

            sum =0;
            for(int j=0; j<accounts[i].size(); j++){
                sum = sum + accounts[i][j];
            }
            // maximum = max(sum,maximum);
            if(sum > maximum){
                maximum = sum;
            }
        }

        return maximum;
}

int main(){
    vector<vector<int>> accounts = {{1, 2, 3}, {3, 2, 1},{2,8,26}};

    int ans = maximumWealth(accounts);

    cout<<ans;
    return 0;
}   