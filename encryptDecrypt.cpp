#include <iostream>
#include <string>

using namespace std;

int main()
{
    string alphabet = " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string encodingAlphabet = ")qwertyuiop[]asdfghjkl;'zxcvbnm,.123456789+-*/@#$%^&(";
    string message{};
    string encodedMessage{};
    string decodedMessage{};

    string test{};
    int position, i, j;

    cout << "Enter a message: ";
    getline(cin, message);

    encodedMessage = decodedMessage = message;

    //Encoding
    for (i = 0; i < message.length();i++)
    {
        if (isalpha(message[i]) || ' ' == message[i])
        {
            for (j = 0; j < alphabet.length();j++)
            {
                if (message[i]==alphabet[j])
                {
                    encodedMessage[i] = encodingAlphabet[j];
                    break;
                }
            }
        }
    }


    cout << "Encoding the message..." << endl;
    cout << message << " -> "<< encodedMessage << "\n\n\n\n\n" <<endl;

    //Decoding
    for (i = 0; i < message.length();i++)
    {
        if (isalpha(encodedMessage[i]) || ' ' == message[i])
        {
            for (j = 0; j < encodingAlphabet.length();j++)
            {
                if (encodedMessage[i]==encodingAlphabet[j])
                {
                    decodedMessage[i] = alphabet[j];
                    break;
                }
            }
        }
        
    }

    cout << "Decoding the message..." << endl;
    cout << encodedMessage << " -> "<< decodedMessage << "\n\n\n\n\n"<<endl;
}