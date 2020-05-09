#include <iostream>
#include <string>

using namespace std;

int main()
{
    // branching -> conditions
        // if statements
        // switch statements

    /*
    cout << "How old are you?\n";
    int age;
    cin >> age;
    if(age < 18)
    {
        cout << "You are not old enough" << endl;
        return  -1;
    }
    else if(age > 30)
    {
        cout << "You are too old" << endl;
        return  -1;
    } 
    else
    {
        cout << "Welcome to the club!" << endl;
        return  -1;
    }
    cout << "This wont display because of return statements above\n";
    */

    string answer = "Betty";
    int age = 50;

    string guess;
    cout << "Guess the name\n";
    cin >> guess;

    int age_guess;
    cout << "Guess the age\n";
    cin >> age_guess;

    /* 
        Logical Operators: && || ! 
        Comparison Operators: == != < > <= >=
    */
    if ( guess == answer ) // Betty
    {
        cout << "Correct!\n";
    }
    else if (age_guess == age) // Equal to 50
    {
        cout << "Correct!\n";
    }
    else
    {
        cout << "Try again\n";
    }

    // contrived example for reference
    /* nested if example (same as &&) */
    if (true)
    {
        if (true)
        {
            // result of both conditions being true
        }
    }
    return 0;
}






