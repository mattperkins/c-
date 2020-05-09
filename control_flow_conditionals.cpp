#include <iostream>
#include <string>

using namespace std;

int main()
{
    // branching -> conditions
        // if statements
        // switch statements (uses intergral types only i.e Int)
    
    cout << "How old are you?\n";
    int age;
    cin >> age;
    if(age < 18)
    {
        cout << "You are not old enough" << endl;
        // return  -1;
    }
    else if(age > 30)
    {
        cout << "You are too old" << endl;
        // return  -1;
    } 
    else
    {
        cout << "Welcome to the club!" << endl;
        // return  -1;
    }
    cout << "This only display when return statements above are active \n";

    string answer = "Betty";
    int guess_age = 50;

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
    else if (age_guess == guess_age) // Equal to 50
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

    int fav_num;
    cout << "What is the magic number?\n";
    cin >> fav_num;
    switch (fav_num)
    {
        case 5:
            cout << "Incorrect\n";
            break;
        case 7: // either 7
        case 8: // or 8
            cout << "Correct!!!\n";
            break;
        case 10:
            cout << "Incorrect\n";
            break;
        default:
            cout << "The number you chose was wrong\n";
            break;
    }    

    // enum class is scoped 
    // regular enum is not and doesnt require Lottery:: prefix
    enum class Lottery{one, two, three};
    Lottery winner = Lottery::one;
    switch (winner)
    {
        case Lottery::one:
            cout << "Correct!!!\n";
            break;
        case Lottery::two:
            cout << "Wrong\n";
            break;
        case Lottery::three:
            cout << "Wrong\n";
            break;
        // default not required here.
    }
    return 0;
}






