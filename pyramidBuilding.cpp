#include<iostream>
#include<string>

using namespace std;

int main()
{
    string message{};
    int whitespaces, charcount, reversed, i, j, k, l;

    cout << "Enter a message to build pyramid: ";
    getline(cin, message);

    whitespaces = message.length() - 1;
    charcount = 0;
    reversed = charcount-1;
    cout << message.length() << endl;

    
    for (i = 0; i < message.length();i++)
    {
        for (j = 0; j < whitespaces; j++)
        {
            cout << " ";
        }

        for (k = 0; k <= charcount;k++)
        {
            cout << message.at(k);
        }

        for (l = reversed; l >= 0; l--)
        {
            cout << message.at(l);
        }
        
        charcount += 1;
        reversed += 1;
        whitespaces -= 1;
        cout << endl;
    }
}