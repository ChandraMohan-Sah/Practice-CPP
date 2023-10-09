/*
    Longest K unique Character Substring

    Input:
    S = "aabacbebebe", K =3 (i.e in that substring 3 unique character should be present) 

    Output: 7
    Explanation : "cbebebe" is the longest substring 
                    with K distince characters.

*/


#include<iostream>
#include<algorithm>
using namespace std;

int PrintLength(char ch[]){
    int count =0;
    for(int i=0; ch[i] != 0; i++){
        count++;
    }
    return count;

}

int LongestKSubstring(char ch[], int k){
    int length = PrintLength(ch);
    
    int i =0, j=0;
    int max_window_size = -1;
    
    unordered_map<char, int> mp;

    while(j<length){
        mp[ch[j]]++;

        if(mp.size()<k){
            j++;
        }

        else if(mp.size() == k){
            max_window_size = max(max_window_size, (j-i+1));
            j++;
        }
        else{
            while(mp.size()>k){
                mp[ch[i]]--;

                if(mp[ch[i]] == 0){
                    mp.erase(ch[i]);
                }
                i++;
            }
            j++;
        }
    }
    return max_window_size;
}


int main(){
    char ch[100];
    cin.getline(ch, 30);
    int unique_characters =3;
    int ans = LongestKSubstring(ch, unique_characters);

    cout<<"Longest K unique Character Substring  : "<<ans<<endl<<endl;


    return 0;
}