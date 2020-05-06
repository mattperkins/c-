#include <iostream>

int main()
{
  using std::cout;
  int slices;
  slices = 5;
  cout << "The number equals " << slices << " correct" << std::endl;

  printf("%i\n", slices); // alternate logging method 

  int myNum ;
  std::cin >> myNum; 
  cout << "The total equals " << myNum << std::endl;

  return 0;
}

void test()
{
  std::cout << "test";
}