#include<iostream>
using namespace std;

int main(){
	int i =1;
	int n;
	cin >>n;

	while(i<n){
		cout<< i;
		if(i == 3){
			continue;
		}
		i++;
	}

	return 0;
}
