#include<iostream>
#include <vector>

using namespace std;

int main(){
	vector <int> v = {2,3,5,6,7};

	for(int value : v){
		cout<< value << " ";
	}
	
	cout<<endl;
	return 0;
}

