#include <iostream>
#include <string>

using namespace std;

int main()
{
    /* String Class (C++ standard) */
    // An instantiated variable string = ""
    string hello;
    hello = "hello,world"; // String literal (object instance of the String class - string of characters strung together)
    cout << hello << endl; // hello,world
    cout << hello[1] << endl; // e
    
    // String concatenation
    hello += " you are so beautiful";
    cout << hello + "!" << endl;

    /* methods = member functions attached to objects */
    cout << hello.length() << endl;

    /* C Strings (backwards compatible with C) */
    char name[] = "betty"; 
    cout << name << endl;
    // a C style string is an array of characters
    // b,e,t,t,y and \0 (the null terminating character)
    // if reassigned will display the following error:
    // array type 'char [6]' is not assignable

    // std::cin stops at first space in string
    // string user;
    // cin >> user; // if user inputs: 'hello world'
    // cout << user << endl; // only 'hello' is output

    // getline function allows multiple words and spaces
    string sentence;
    getline(cin, sentence);
    cout << sentence << endl;

}