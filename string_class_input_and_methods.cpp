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
    hello += " \vnow input some text below";
    cout << hello + "!" << endl;

    /* Note: */
    /* std::cin doesn't work for getting user inputted strings as it stops at first space in string */
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

    /* Functions that modify strings with operation methods (changing the original variable value) */

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
    
    
    /* Functions that dont modify strings/variable values directly but return a value or modification */
    // String Operation Methods
    string bar;
    bar = "what the hell";
    bar.replace(bar.find("hell"), 4, "heaven");
    cout << bar << endl;
    cout << bar.find_first_of("aeiou") << endl; // 2 (index 2)
    cout << bar.find_first_of("!") << endl; // npos or -1 (the giant number returned is an unsigned long which can only be a positive value and as the result is -1 it converts to the giant number)
    // see example below:
    unsigned long negOne = -1;
    cout << negOne << endl;
    // using -1 (npos) as a conditional check
    if(bar.find_first_of("!") == -1) cout << "NOT FOUND" << endl;

    if(bar.compare("what the hell")) cout << "FOUND" << endl;
    
    // returns 0 if values are equal
    if(bar.compare("what the heaven") == 0) cout << "EQUAL" << endl;
    
    // double equals preferred method (over .compare) in C++
    if(bar == "what the heaven") cout << "MATCH" << endl;

    string baz;
    baz = "what is up?";
    string bazMod = baz.substr(5,2); // index 5, 2 characters length
    cout << bazMod << endl;

    
    // *****************************************************
    // -----------------------------------------------------
    // Backward compatibility reference:
    // C Strings (From the C Language)
    // ignores the single quote rule as its an array
    char name[] = "betty"; 
    cout << name << endl;
    // a C style string is an array of characters
    // b,e,t,t,y and \0 (the null terminating character)
    // if reassigned will display the following error:
    // array type 'char [6]' is not assignable
}