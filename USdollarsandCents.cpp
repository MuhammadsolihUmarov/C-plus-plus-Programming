#include<iostream>

using namespace std;


int main()
{
    int cents{0};
    int dollar{0}, quarter{0}, dime{0}, nickel{0}, penny{0};
    cout << "Enter how much cents you have: ";
    cin >> cents;
    if (cents<=0)
    {
        cout << "Number should be greater than 0";
        return 1;
    }
    dollar = cents / 100;
    quarter = (cents-dollar*100)/25;
    dime = (cents-dollar*100-quarter*25)/10;
    nickel = (cents-dollar*100-quarter*25-dime*10)/5;
    penny = cents%5;

    cout << "Dollar (=100 cents): " << dollar << endl;
    cout << "Quarter (=25 cents): " << quarter << endl;
    cout << "Dime: (=10 cents): " << dime << endl;
    cout << "Nickel (=5 cent): " << nickel << endl;
    cout << "Penny: (=1 cent): " << penny << endl;
}
