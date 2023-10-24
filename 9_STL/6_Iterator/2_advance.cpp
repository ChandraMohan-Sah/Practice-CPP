// C++ code to demonstrate the working of 
// advance() 

#include<iostream> 
#include<vector> // for vectors 
using namespace std; 

int main() 
{ 
   
	vector<int> ans = { 1, 2, 3, 14, 5 }; 
	
	vector<int>::iterator ptr = ans.begin(); 
	

	// Using advance() to increment iterator position 

	advance(ptr, 3); //Initially 1st position thiyo ; Aba 3 position add garapaxi 4th position lai point garyo.
                     // NO '0' based indexing.
	
	cout << "The position of iterator after advancing is : "; 
	cout << (*ptr) << " "; 
	
	return 0; 
} 
