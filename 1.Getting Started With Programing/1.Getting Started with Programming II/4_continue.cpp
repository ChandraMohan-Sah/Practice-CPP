#include<iostream>
using namespace std;

int main(){
	int i =1;
	int n;
	cin >>n;

	while(i<n){
		cout<< i<<" ";
		if(i == 3){
			i++; // if removed thi it goes it infine loop as continue skips belows line and updation of i is not possible
			continue;
		}
		i++;
	}

	/*
	for(int i=1; i<6; i++){
		cout<<i<<" ";
		if(i==3){
			continue;
		}
	}
	*/

	return 0;
}
