#include<iostream>

using namespace std;

int main()
{
    const double euroToDollar{1.12};
    double euro, dollar;

    cout << "Welcome to EUR to USD converter! 1 dollar = " << euroToDollar << endl;
    cout << "Enter the value in EUR: ";
    cin >> euro;
    dollar = euro * euroToDollar;

    cout << euro << " euro in dollar is " << dollar << endl;
}