/* Rotate String By D places */

#include<iostream>
using namespace std;

int PrintLength(char ch[]){
    int count =0;
    for(int i=0; ch[i] != 0; i++){
        count++;
    }
    return count;

}

void RemoveDuplicate(char ch[], int d){
    char temp[d];
    int length = PrintLength(ch);

    d =d%length;
    for(int i=0; i<d; i++){
        temp[i] = ch[i];
    }

    for(int i= d; i<length; i++){
        ch[i-d] = ch[i]; //if d =3 , ch[0] = ch[3]
    }


    int j=0;
    for(int i=length-d; i<length; i++){
        ch[i] = temp[j];
        j++;
    }
    cout<<ch<<" ";
}

int main()
{
    char ch[100];
    cin.getline(ch, 20);

    int left_d_places=3;

    RemoveDuplicate(ch, left_d_places);
    return 0;
}


// 2nd Approach ----> Do Solution as done in video : 

