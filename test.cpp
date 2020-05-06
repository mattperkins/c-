#include <iostream>

int main()
{
  using std::cout;
  int slices;
  slices = 5;
  cout << "The number equals " << slices << " correct" << std::endl;

  printf("%i\n", slices); // alternate logging method 

  int myNum ;
  std::cout << "What is your favourite number? ";
  std::cin >> myNum; 
  cout << "Your favourite number is " << myNum << std::endl;

  return 0;
}

void test()
{
  std::cout << "test";
}