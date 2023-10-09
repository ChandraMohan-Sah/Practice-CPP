//Taking n string as input is a bit logical

/* check this belows code .You are Only able to  input 2 string .even if n=3 

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char ch[50];

    for(int i=0; i<n; i++){
        cin.getline(ch, 30);
        cout<<ch<<endl;
    }
    return 0;
}

Solution : use cin.ignore()   or cin.ignore()  before loop

'\n' is default delimiter (like a terminator of any string) in cin.getline().

Input Buffer
-----------------------------------------------------------------------------------------------------------
| 3 | '\n' |   H   |   e   |   l   |   l   |   o   | '\n' |   W   |   o   |   r   |   l   |   d   |   '\n'  |
-----------------------------------------------------------------------------------------------------------
        |
        |
        |--->As soon as you press enter after pressing 3 . One input is wasted assuming '\n' as first string
             So use  either cin.get() or cin.ignore() to ignore initial '\n' character

            How does cin.ignore works ??
            -think
*/



#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char ch[50];

    cin.ignore();

    for(int i=0; i<n; i++){
        cin.getline(ch, 30);
        cout<<ch<<endl;
    }
    return 0;
}
