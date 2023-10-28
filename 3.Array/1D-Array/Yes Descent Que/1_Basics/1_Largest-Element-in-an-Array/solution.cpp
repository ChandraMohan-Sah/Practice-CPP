#include <bits/stdc++.h> 
using namespace std;

class Solution{
public:
    int largestElement(vector<int> &arr, int n) {
        // Write your code here.
        int largest = INT_MIN;

        int i=0;
        while(i<n){
            if(arr[i]>largest){
                largest = arr[i];
            }
            i++;
        }

        return largest;
    }
};

int main(){

    Solution obj;

    vector<int> A = {3,4,5,1,2};
    int n = A.size();
    int ans = obj.largestElement(A,n);

    cout<<"Largest Element is : "<<ans<<endl;

    return 0;
}