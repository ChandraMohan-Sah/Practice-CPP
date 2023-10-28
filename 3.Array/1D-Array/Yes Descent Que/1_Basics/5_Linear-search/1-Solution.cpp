#include<iostream>
#include<vector>

using namespace std;


int linearSearch(int n, int num, vector<int> &arr)
{
    // Write your code here.

    for(int i=0; i<n; i++){
        if(arr[i] == num){
            return i;
        }else{
            continue;
        }
    }

    return -1;
}

int main(){

    vector<int> arr = {12, 3, 4 ,35, 67};
    int n = arr.size();
    int target = 35;

    int ans = linearSearch(n, target, arr);

    cout<<"Index : "<< ans<<endl;
    return 0;
}