#include <iostream>
#include <cmath>
int main()
{
    int multiply(int,int);
    
    using std::cout;
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

    int x = pow(10,2);
    std::cout << x << std::endl;

    return 0;

    // int multiply(int x, int y)
    // {
    //     return x * y
    // }    
    // std::cout << multiply(5,5) << std::endl;
}

void test()
{
    std::cout << "test";
}