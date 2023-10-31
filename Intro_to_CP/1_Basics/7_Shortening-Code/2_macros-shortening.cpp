#include<iostream>
#include<vector>
using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,n,inc_n) for(int i = 0; i < n; i++)


int main()
{
    typedef vector<pair<int,int>> vec; 
    vec v;

    int x1 = 10, x2 =30, y1 =20, y2 = 40;

    // v.push_back(make_pair(y1,x1));
    // v.push_back(make_pair(y2,x2));

    /*Replacement of above code*/
    v.PB(MP(y1,x1));
    v.PB(MP(y2,x2));

    int n = v.size();

    REP(i,n,inc_n){
        // cout<<v[i].first+v[i].second<<endl;
        /*Replacement of above code*/
        cout<<v[i].F+v[i].S<<endl;
    }

    return 0;
}