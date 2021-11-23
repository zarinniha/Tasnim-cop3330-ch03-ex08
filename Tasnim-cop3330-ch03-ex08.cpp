#include "std_lib_facilities.h"
using namespace std;

int main()
{
    int n;

    cout << "Enter an integer:";
    cin>> n;

    if(n%2==0) //testing if it is an even number
    {
        cout<< "The value " <<n <<" is an even number";
    }else
    {
        cout<< "The value " <<n <<" is a odd number";


    }

    return 0;
    
}