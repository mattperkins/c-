#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    cout << "line\nbreak" << endl;
    cout << "tab\tcharacter" << endl;
    cout << "backspace\b delete the letter e" << endl;
    cout << "vertical\vtab" << endl;
    cout << "alert\a noise" << endl; 
    cout << "\0" << endl; // null terminating character
    cout << "\"escape quotations\"" << endl;

    char single_quote = '\'';
    cout << single_quote << endl;

    string backslash = "\\";
    cout << backslash << endl;
}