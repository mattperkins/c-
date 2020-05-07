#include <iostream>
#include <climits>

using std::cout;
using std::endl;

int main()
{   
    /* INTEGRAL DATA TYPES */

    /* signed */
    short a; 
    int b;
    long c;
    long long d;
    
    /*  short <= int <= long <= long long */

    /* 'unsigned' = positive values only */
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

    cout << sizeof(char) << endl;

    cout << "\n";

    /* uses #include <climits> at top of file */
    cout << SHRT_MAX << endl;
    cout << SHRT_MIN << endl;
    /* unsigned version */
    cout << USHRT_MAX << endl;

    cout << INT_MAX << endl;
    cout << INT_MIN << endl;
    /* unsigned version */
    cout << UINT_MAX << endl;

    cout << LONG_MAX << endl;
    cout << LONG_MIN << endl;
    /* unsigned version */
    cout << ULONG_MAX << endl;

    cout << LLONG_MAX << endl;
    cout << LLONG_MIN << endl;
    /* unsigned version */
    cout << ULLONG_MAX << endl;

    cout << "\n";
    
    /* CHAR (Integral Data Type) */
    /* Store small numbers or characters */
    
    // Single quotes only (Double quotes reserved for Strings)
    char A = 'A'; // char literal
    cout << A << endl;
    cout << (int) A << endl; // cast as Int
    char Z = 'Z'; // char literal
    cout << Z << endl;
    cout << (int) Z << endl; // cast as Int
}   
