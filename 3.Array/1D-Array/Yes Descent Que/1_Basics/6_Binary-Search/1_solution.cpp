#include<iostream>
#include<vector>
using namespace std;

int Binarysearch(vector<int>& nums, int target) {
        int n = nums.size();
        
        //------Already Handled-------
        // if(n == 1){
        //     if(nums[0] == target){
        //         return 0;
        //     }else{
        //         return -1;
        //     }
        // }

        int start = 0;
        int end = n-1;

        while(start <= end){
            int mid = (start + end )/2;

            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target ){
                start = mid +1;
            }else{
                end = mid -1;
            }
        }

        return -1;

    }

int main(){

    vector<int> arr = {12, 3, 4 ,35, 67, 2, 89, 90};
    int n = arr.size();
    int target = 89;

    int ans = Binarysearch(arr, target);

    cout<<"Index : "<< ans<<endl;
    return 0;
}




