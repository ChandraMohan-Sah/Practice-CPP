#include<iostream>
using namespace std;

int PrintLength(char ch[]){
    int count =0;
    for(int i=0; ch[i] != 0; i++){
        count++;
    }
    return count;

}

void FrequencyCount(char ch[]){
    int freq[26]={0}; //Array to store the count of each characters repeated

    int len = PrintLength(ch); 
    int index ;

    for(int i=0; i<len; i++){  //Iterate over ch[] array and store freq of each characters in freq[] array
        index = ch[i] - 'a';
        freq[index]++; //go to particular index of freq[] array and increase its frequency
    }


    for(int i=0; i<25; i++){ // Output the result 
        if(freq[i] != 0){   
            char alphabet= i + 'a'; // for i=3 ; 0 +'a' ==> d;
            cout<<"Character "<<alphabet<< "---->"<< freq[i]<<" Times"<<" "<<endl<<endl;
        }
    }
}

int main()
{
    char ch[100];
    cin.getline(ch, 30);

    FrequencyCount(ch);
    return 0;
}