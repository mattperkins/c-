#include <iostream>

using std::cout;
using std::endl;

int main()
{
    /* signed */
    short a; 
    int b;
    long c;
    long long d;
    
    /*  short <= int <= long <= long long */

    /* positive values only */
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    cout << "1 byte = 8bits" << endl;
    cout << "So 2 = 16 bits and so on\n\n";
    cout << sizeof(short) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    
    cout << sizeof(unsigned short) << endl;
    cout << sizeof(unsigned int) << endl;
    cout << sizeof(unsigned long) << endl;
    cout << sizeof(unsigned long long) << endl;
}
