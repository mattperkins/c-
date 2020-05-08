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

    /* Note: */
    /* std::cin doesn't work for getting user inputted strings */
    // std::cin stops at first space in string
        // Example:
        // string user;
        // cin >> user; // if user inputs: 'hello world'
        // cout << user << endl; // only 'hello' is output
    // So we use the getline function 
    // Which allows multiple words and spaces
    string sentence;
    getline(cin, sentence);
    cout << sentence << endl;
        // Note: cin.getline() is a different function used for getting user input numbers (int/double etc) not strings.

    /* String Methods */
    // Member functions attached to objects (i.e strings)
    cout << hello.length() << endl; 
    cout << hello.size() << endl; // same as length

    // Modifiers
    string mod;
    mod = "marco";
    // += does same as .append() 
    mod += " polo"; 
    cout << mod << endl;
    mod.insert(5, "            "); // start index and insert values
    cout << mod << endl;
    mod.erase(5, 6);  // start index and erase value
    cout << mod << endl; 
    mod.erase(5);  // start index and remove all subsequent
    cout << mod << endl; 
    mod.pop_back(); // remove last character
    cout << mod << endl; 
    mod.erase(mod.length() -2); // remove last two characters
    cout << mod << endl; 
    
    string foo;
    foo = "what the heck";
    foo.replace(9, 4, "bleep!"); // replace(index/letters/value)
    cout << foo << endl;
    
    /* Return values or modifications */
    // .find()


    // Backward compatibility reference:
    // C Strings (From the C Language)
    char name[] = "betty"; 
    cout << name << endl;
    // a C style string is an array of characters
    // b,e,t,t,y and \0 (the null terminating character)
    // if reassigned will display the following error:
    // array type 'char [6]' is not assignable
}