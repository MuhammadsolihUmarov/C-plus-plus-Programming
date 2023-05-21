#include <iostream>
#include "Players.h"

using namespace std;


void display_active_players()
{
    cout << "Ative players: " << Player::get_num_players() << endl;
}


char ask()
{
    char oper;
    cout << "Enter\n"
            "A for adding a player\n"
            "V for vewing current active players\n"
            "Q for quitting the game\n"
    << endl;
    cin >> oper;
    oper = toupper(oper);
    return oper;
}

void adder()
{
    string name, code;
    int health, xp;

    cout << "Enter player's name: ";
    cin >> name;
    cout << "Enter player's xp: (numbers) ";
    cin >> xp;
    cout << "Enter player's health: (numbers) ";
    cin >> health;
    code = name + "_code";
    Player* player = new Player(name, xp, health);
}


int main()
{
    char operation;
    
    /*cout << "Do you want to add a player? ";
    cin >> operation;*/
    while (true)
    {
        operation = ask();
        if (operation=='Q')
        {
            cout << "Bye" << endl;
            break;
        }

        switch(operation)
        {
            case 'A':
                adder();
                break;
            case 'V':
                display_active_players();
                break;
            default:
                cout << "Wrong command!" << endl;
        }
    }
    
    return 0;
}