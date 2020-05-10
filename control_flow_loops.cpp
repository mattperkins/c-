#include <iostream>
#include <float.h>
#include <string>

using namespace std;

int main()
{
    // looping -> repeat code output
        // for loop
        // while loop
        // do-while loop
    
    // Intialise
    // Condition/Comparison
    // Update


    for (int i = 5; i >= 0; i--)
    {   
        cout << i << endl;
    }

    cout << "\n";

    int fact;
    cout << "Give me a number between 1 and 12 \n";
    cin >> fact;
    int factorial = fact;
    for (int i = factorial -1; i > 1; i--)
    // factorial -1 = 4
    // 5 x 4 = 20 x 3 = 60 x 2 = 120 x 1 = 120
    {
        factorial *= i;
        cout << factorial << endl;
    }
    cout << "Factorial of " << fact << " is " << factorial << endl;

    cout << "\n";

    int j = 0;
    while (j < 3)
    {
        j++;
        cout << j << endl;
    }
    return 0;
}