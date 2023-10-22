#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums;
    int x;

    cout<<"Enter elements in vector nums."<<endl;
    while(1){
        cin>>x;
        if(x == -1){ //delimeter
            break;
        }
        nums.push_back(x); //elements yesari enter hunxa vector ma !!
    }

    for(auto it: nums){ //it holds actual value not the index of element
        cout<<it<<" ";
    }
    
    return 0;
}