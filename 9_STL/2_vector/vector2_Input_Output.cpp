#include<iostream>
#include<vector>
using namespace std;

void printVec(vector<int> &v){ //pass by reference
    cout<<"Size : "<< v.size() <<endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout <<endl;
}


int main(){
    vector<int> v;
    cout<<"Enter size of vector : ";
    int n;cin>>n;

    cout<<"Enter  "<< n << " elements "<<endl; 
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl<<endl;

    printVec(v);
    cout<<"After Deletion Elements Becomes : "<<endl;
    v.pop_back();
    printVec(v);

    return 0;
}
