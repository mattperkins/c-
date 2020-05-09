#include <iostream>
#include <float.h>

using namespace std;

int main()
{
    // branching -> conditions
        // if statements
        // switch statements
    int age = 18;
    if(age < 18)
    {
        cout << "You are not old enough" << endl;
        return  -1;
    }
    else if(age > 30)
    {
        cout << "You are too old" << endl;
        return  -1;
    } 
    else
    {
        cout << "Welcome to the club!" << endl;
        return  -1;
    }
    cout << "This wont display because of return statements above\n";
    
    return 0;
}






