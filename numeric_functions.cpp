#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << sqrt(25) << endl; // 5 (square root of 25)
    cout << sqrt(-25) << endl; // nan (not a number)
    cout << pow(9, 999) << endl; // inf (infinity)
    cout << pow(-9, 999) << endl; // -inf (negative infinity)

    cout << NAN << endl;
    cout << INFINITY << endl;
    cout << -INFINITY << endl;
}