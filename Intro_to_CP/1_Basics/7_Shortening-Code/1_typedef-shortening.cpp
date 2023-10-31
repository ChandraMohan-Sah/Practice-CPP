#include<iostream>
#include<vector>
using namespace std;

int main()
{
    typedef long long ll; //BY default long long ===> long long int
    ll  a = 123456789;
    ll  b = 987654321;
    cout<<a*b<<"\n";

    typedef vector<int> vc; 
    vc myvector = {1,2,3,4,5};
    vc hisvector = {23,4,5,67,7};
    cout<<"Elements in the vector : ";
    for(auto it :  myvector ){
        cout<<it<<" ";
    }cout<<endl;

    for(auto it :  hisvector ){
        cout<<it<<" ";
    }cout<<endl;


    typedef pair<int,int> pr;
    pr myPair = make_pair(10, 20);
    cout << "Pair values: " << myPair.first << " and " << myPair.second << "\n";
 
    return 0;
}
