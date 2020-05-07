#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /* Square Root and Pow functions */
    cout << sqrt(25) << endl; // 5 (square root of 25)
    cout << sqrt(-25) << endl; // nan (not a number)
    cout << pow(9, 999) << endl; // inf (infinity)
    cout << pow(-9, 999) << endl; // -inf (negative infinity)

    /* NAN, INFINITY and NEGATIVE INFINITY */
    cout << NAN << endl;
    cout << INFINITY << endl;
    cout << -INFINITY << endl;

    /* Remainder function (a replacement for the modulus operator */
    cout << 10 % 3 << endl;
    cout << remainder(10, 3.25) << endl;
    // fmod and remainder differ regarding rounding vs trucation
    cout << fmod(10,3.25) << endl;
}