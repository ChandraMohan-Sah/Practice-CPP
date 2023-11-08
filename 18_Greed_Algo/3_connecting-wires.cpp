#include<iostream>
#include<algorithm>
using namespace std;

/* This code seems to be correct ; Not aure */


int main()
{   
    //Indexes where dots are present
    int BlackDot[] = {3,4,1};
    int WhiteDot[] = {2,5,6};

    int n1 = sizeof(BlackDot)/sizeof(int);
    sort(BlackDot, BlackDot+n1);

    int n2 = sizeof(WhiteDot)/sizeof(int);
    sort(WhiteDot, WhiteDot+n2);

    int ans =0,i;
    while(i<n1){
        ans += WhiteDot[i] - BlackDot[i];
        i++;
    }

    cout<<"Max Length of Wire is : "<<ans<<" units"<<endl;
    return 0;
}