#include<iostream>
using namespace std;


//Precedence means Priority / ahemeeyatt ;

/*Double has higher precedence then float

Precedence order of calculation
    1.Double ----->(Highest among all)
    2.Float
    3.ll int
    4.l int
    5 int
    6 characters

*/

int main()
{   
    //1.Precedence Understanding
    cout<<"-----Concept-1:Precedence Understanding------"<<endl;
    cout<< 7/2 <<endl; // it gives int;
    cout<< 7/2.0 <<endl; //float has higher precedence then int. So calculation is done in float.
    cout<< 'c'+1; //it gives 100; Hunu parna 'd'. tara int ko precedence higher hunxa then characters.



    //2.Calculation then storing
    /*It was calculated in float ; ans was  1.5 ;
    But later on while storing it was stored as 1
    since bucket storing ans is int data type.
    */
    cout<<endl<<endl<<"-----Concept-2:Understanding Calculation then storing----->"<<endl;
    int a = 3/2.0; 
    cout<< a<<endl;

    //3.Associativity Understanding : Here [Left to Right]
    cout<<endl<<endl<<"-----Concept-3:Associativity Understanding----->"<<endl;
    cout<< 7/2 *3<<endl;
    cout<<3*7 /2 <<endl;


    return 0;
}