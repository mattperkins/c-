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
    /* Store small numbers (-127 to 127) or characters */
    
    // Single quotes only (Double quotes reserved for Strings)
    signed char A = 'A'; // char literal
    cout << A << endl;
    cout << (int) A << endl; // cast as Int
    signed char Z = 'Z'; // char literal
    cout << Z << endl;
    cout << (int) Z << endl; // cast as Int

    signed char X = 88; // 88 equivalent to X on ascii table
    cout << X << endl;
    cout << (int) X << endl;

    signed char B = 66; // 66 equivalent to B on ascii table
    cout << B << endl;
    cout << (int) B << endl;

    signed char D = -127;
    cout << (int) D << endl;

    /* unsigned chars - (128-255) */
    unsigned char xy = 128;
    cout << (int) xy << endl;

    unsigned char yx = 255;
    cout << (int) yx << endl;

    /* 
        unicode: char16_t and char32_t are char data types which extend memory for characters beyond the above. (example: for international languages) 
    */
}   
