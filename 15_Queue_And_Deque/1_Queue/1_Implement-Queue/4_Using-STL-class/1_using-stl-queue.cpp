#include<iostream>
#include<queue>
using namespace std;


int main()
{   
    //creating an object of type queue that accepts integer
    queue<int> obj;

    for(int i=1; i<=5; i++){
        obj.push(i);
    }

    obj.pop();
    obj.pop();
    obj.push(7);

    while(!obj.empty()){
        cout<< obj.front() << "<-";
        obj.pop();
    }
    return 0;
}

/*Operation in Queue
------------------------
    obj.push(data)
    obj.pop();
    obj.front();
    obj.empty();

*/