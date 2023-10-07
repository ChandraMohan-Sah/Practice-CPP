
#include<iostream>
using namespace std;
int main() {

	char ch;
	float N1, N2;
	float result ;
	

	while(1){
        cin>>ch;
    	switch(ch){
    		case '+':
    			cin>>N1;
    			cin>>N2;
    			result = N1 + N2;
    			cout<<result;
    			break;
    
    		case '-':
    			cin>>N1;
    			cin>>N2;
    			result = N1 - N2;
    			cout<<result;
    			break;
    
    		case '*':
    			cin>>N1;
    			cin>>N2;
    			result = N1 * N2;
    			cout<<result;
    			break;
    		
    		case '/':
    			cin>>N1;
    			cin>>N2;
    			result = N1 /N2;
    			cout<<result;
    			break;
    
    		case '%':
    			int x, y;
                cin>>x;
                cin>>y;
    			result = x%y;
    			cout<<result;
    			break;
    		

            case 'x':
                return 0;
	
    		default:
    			cout<<"Invalid operation. Please enter another Input."<<endl;
    			continue;

	    }
    break;
}
	return 0;
}