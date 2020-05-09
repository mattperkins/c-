#include <iostream>
#include <float.h>

#define X 10 // (C language format) Constant that is globally scoped

using namespace std;
/* 
using std::cout;
using std::endl;
using std::string;
*/

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

    signed char Y = 88; // 88 equivalent to X on ascii table
    cout << Y << endl;
    cout << (int) Y << endl;

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

    /* bool : true or false */
    bool one = 1;
    bool nine_seven_one = 971;
    bool negative_one = -1;
    bool negative_four = -4;
    bool is_true = true;
    bool print_true = true;
    
    bool zero = 0;
    bool is_false = false;
    bool print_false = false;

    cout << one << endl; // true (logged as 1)
    cout << nine_seven_one << endl; // true (logged as 1)
    cout << negative_one << endl; // true (logged as 1)
    cout << negative_four << endl; // true (logged as 1)
    cout << is_true << endl; // (logged as 1)

    cout << is_false << endl; // (logged as 0)
    cout << zero << endl; // false (logged as 0)

    /* boolalpha : prints true or false instead of 1 or 0 */
    cout << boolalpha << print_true << endl;
    cout << boolalpha << print_false << endl;

    // if(is_true) cout << "This is true" << endl;

    /* Floating Point and Numbers */
    /* float, double and long double */
    
    float ten_divide_three = 10.0 / 3;
    cout << ten_divide_three << endl;
    ten_divide_three = ten_divide_three * 10000000000;
    cout << ten_divide_three << endl;
    cout << fixed << ten_divide_three << endl;
    
    // 7.7E4 means float the decimal point to the right 4 places
    // so 7.7 becomes 77000.
    double seventy_seven_thousand1 = 77000; // same as 7.7 x (10 ^ 4)
    double seventy_seven_thousand2 = 7.7E4; // same as 7.7 x (10 ^ 4)
    cout << seventy_seven_thousand1 << endl;
    cout << seventy_seven_thousand2 << endl;

    long double _long_double;

    cout << FLT_DIG << endl; // float = 6 digit accuracy
    cout << DBL_DIG << endl; // double = 15 digit accuracy
    cout << LDBL_DIG << endl; // long double = 18 digit accuracy
    /* If 18 points of accuracy aren't enough, as with something like banking, import an 'exact precision' library to guarantee every number is accurate. */

    /* use 'float' if memory is limited, 'double' otherwise when fractional amounts are required or use 'int' */

    /* Integral Constants types */
    
    int s = 5; // literal constant

    // symbolic constants = the variable SS below
    const int SS = 5; // immutable/read only

    // macro #define
    cout << X << endl; // defined at top of file (C format)
    
    // enum
    enum { y = 100 }; // immutable
    cout << y << endl;

    /* String Constants */

    // Quoted constants
    char J = 'c'; // characters (single quotes)
    string K =  "c"; // strings (double quotes

    // auto looks at the constant value and makes it the data type of the variable (j,k,l,m,n) / auto determins the data type of the variable based on the constant literal value -> U,UL,ULL,F,L
    auto j = 5U; // j = an unsigned integer
    auto k = 6UL; // k = unsigned long
    auto l = 4ULL; // l = unsigned long long
    auto m = 5.0F; // float
    auto n = 5.0; // defaults to a double with no suffix
    auto o = 5.0L; // long double

    // As a reference for this section, decimal is multiple of 10 
    // so the number 24 = 4x1 and 2x10
    
    /* Hexidecimal (Hex) and Octol Numbers -> two different ways of counting */

    // Hex base16 = multiple of 16 i.e 0-15 as follows:
    // 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F,10,11,12,13,14,15,16,17,18,19,1A,1B,1C,1D,1E,1F,20,21,22,23,24,25,26,27,28,29,2A,2B...
    // so the number 24 = 8x1 and 1x16

    // Octol base8 = multiple of 8 i.e 0-7 as follows:
    // 0,1,2,3,4,5,6,7,10,11,12,13,14,15,16,17,20,21,23,24...
    // so the number 24 = 3x8

    /* Literals for Hex and Oct and base conversion to decimal */
    int decNum = 30; // 3x10 -> base 10 (dec)
    cout << decNum << endl; // 30
    
    // base 16 (hex) to decimal
    int hexNum = 0x30; // (e=14 and 1x16 = 30)
    cout << hexNum << endl; // 48 -> 3 x 16
    cout << hex << decNum << endl; // 1e 

    // base 8 (oct) to decimal
    int octNum = 030; // (6 + 3x8 = 24)
    cout << octNum << endl; // 24 -> 3 x 8
    cout << oct << octNum << endl; // 18     

    // See also:
    // wchar_t (unicode / multiple language support)
    // char16_t (unicode / multiple language support)
    // char32_t (unicode / multiple language support)

}   
