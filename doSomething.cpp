#include<iostream>

enum
{
    First=1,
    Second=2,
    Third=3,
    Fourth,//We do not use the rest
    Fifth,
    Sixth,
    Seventh,
    Eighth,
    Nineth
};

/*enum 
{
    First //Throws error
}*/

using namespace std;


int main()
{
    char action{};
    int quit{0};

    cout << "Tell me what to do\nEnter 1 to do this\nEnter 2 to do that\nEnter 3 to do something else\nEnter Q to quit\n";

    while (quit!=1)
    {
    cout << "Enter your choice: ";
    cin >> action;
    
    switch(action)
    {
    case First:
        cout << "Doing this\n";
        break;
    case Second:
        cout << "Doing that\n";
        break;
    case Third:
        cout << "Doing something else\n";
        break;
    case 'Q':
    case 'q':
        quit = 1;
        cout << "Good bye!\n";
        break;
    default:
        cout << "Incorrect command. Enter only (1 or 2 or 3 or Q)\n";
        break;
    }
    }
    
}