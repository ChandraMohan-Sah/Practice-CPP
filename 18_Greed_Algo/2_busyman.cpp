/*
Sample Test cases 
3

3
3 9
2 8
6 9

6 
7 9
0 10
4 5
8 9
4 10 
5 7

4
1 7 
5 8
7 8
1 8



*/



#include<iostream>
#include<algorithm>
#include<vector>
#include<fstream>
using namespace std;

#define t testcases
#define n Activites
#define s StartTime
#define e EndTime

bool compare (pair<int,int> p1, pair<int,int> p2){
    return p1.second <p2.second;
}

int main()
{   
    freopen("2_busymanInput.txt", "r", stdin); // Takes input from input.txt file

    int t,n,s,e;
    cin>>t;

    vector<pair<int,int>> v;

    while(t--){

        cin>>n; //num of activites for that test case
        for(int i=0; i<n ; i++){
            cin>>s>>e;
            v.push_back(make_pair(s,e));
        }

        //Activity Selection Algorithm 
        //Sort 
        sort(v.begin(), v.end(), compare);

        //Start Picking Activity
        int fin = v[0].second;

        int ans =1;
        //iterate over remaining activites
        for(int i=1; i<n ; i++){
            if(v[i].first >= fin){
                fin = v[i].second;
                ans++;
            }
        }

        cout<<"Max Number of Activites that can be done is : "<<ans<<endl;
        v.clear();
    }

    return 0;
}