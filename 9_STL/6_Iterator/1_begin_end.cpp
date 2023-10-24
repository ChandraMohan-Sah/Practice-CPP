// C++ code to demonstrate the working of 
// iterator, begin() and end() 

#include<iostream> 
#include<vector> 
using namespace std; 
int main() 
{ 
	vector<int> ans = { 1, 2, 3, 4, 5 }; 

	// Declaring iterator to a vector 
	vector<int>::iterator ptr; 
	  

	for (ptr = ans.begin(); ptr < ans.end(); ptr++) 
		cout << *ptr << " "; 
	
	return 0;	 
} 
