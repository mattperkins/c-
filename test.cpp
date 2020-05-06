#include <iostream>
#include <cmath>



// Function Definition and Declaration
double multiply(double x, double y)
{
    return x * y;
}

/* IMPORTANT order of operations counts */
void print_pow(double newBase, int newExponent)
{
    double mult = multiply(newBase, newExponent);
    std::cout << newBase << " multiplied by " << newExponent << " equals " << mult << std::endl;
}

// Function Declaration only - Definition at bottom
int data(int, int);

double flower(double x, int y)
{
    double result = 3;
    for(int i = 0; i < y; i++)
    {
        result = result * x;
    }
    return result;
}

int main()
{   
    using std::cout;
    using std::cin;
    using std::endl;

    int slices;
    slices = 5;
    cout << "The number equals " << slices << " correct" << std::endl;

    printf("%i\n", slices); // alternate logging method 

    int myNum;
    std::cout << "What is your favourite number? ";
    std::cin >> myNum; 
    cout << "Your favourite number is " << myNum << std::endl;

    std::string question;
    std::cout << "What day is it today? ";
    std::cin >> question;
    std::cout << "Today is " << question << std::endl;

    cout << pow(1,1);
    cout << endl;

    int x = pow(10,2);
    std::cout << x << std::endl;

    int base, exponent;
    cout << "Provide base ";
    cin >> base;
    cout << "Provide exponent ";
    cin >> exponent;
    double power = pow(base,exponent);
    cout << power << endl;

    double result = multiply(14.2,17.625); 
    cout << "RESULT = " << result << endl;
    
    int dataResult = data(5,5);
    cout << "DATA = " << dataResult << endl;
    
    double bloom = flower(10, 3);
    cout << "POWER = " << bloom << endl;

    print_pow(10,3);
    print_pow(1,9);
    print_pow(15,30);

    return 0;
}

// Function Definition only - Declaration at top
int data(int x, int y)
{
    return x + y;
}
