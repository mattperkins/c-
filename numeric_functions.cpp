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

    /* remainder function (a replacement for the modulus operator */
    cout << 10 % 3 << endl;
    cout << remainder(10, 3.25) << endl;
    
    /* fmod function */
    // fmod and remainder differ regarding rounding vs trucation
    cout << fmod(10,3.25) << endl;

    /* useful for comparisons */
    /* fmax - returns the highest of the arguments passed in */
    /* fmin - returns the lowest of the arguments passed in */
    cout << fmax(50,60) << endl; // 60
    cout << fmin(50,60) << endl; // 50

    /* rounding functions */
    cout << ceil(3.44) << endl; // round up = 4
    cout << ceil(-3.44) << endl; // round up = -3
    cout << floor(3.44) << endl; // round down = 3
    cout << floor(-3.44) << endl; // round down = -4
    cout << trunc(3.44) << endl; // truncate at decimal = 3
    cout << trunc(-3.44) << endl; // truncate at decimal = -3
    cout << round(3.49) << endl; // round value to 3 (crops down)
    cout << round(3.51) << endl; // round value to 4 (rounds up)
    cout << round(-3.49) << endl; // round value to -3 (crops down)
    cout << round(-3.51) << endl; // round value to -4 (rounds up)
    /* use nearby int function if round not suitable */

    /* Operator, Precendence and Associativity */
    
    // Arithmetic operators (+, -, *, /, %)
    // 5 + 5 -> the 5's are operands and the plus sign(+) is the operator
    int k = 3; // the equals sign(=) is the assignment operator
    int l = 5 + 5; // expression assigning 10 to L
    int m = 10 / 4; // int division results = 2 (not floating point 2.5)
    cout << m << endl;
    double n = 10.0 / 4; // uses double division and assigns it as floating point value in a double = 2.5 (important: must be 10. or 10.0 as even if 'double' assigned to 10 it will still = 2)
    cout << n << endl;
    double o = 10 % 4; // modulus = divide and keep remainder (4 goes into 10 twice, with 2 left over)
    cout << o << endl;
}