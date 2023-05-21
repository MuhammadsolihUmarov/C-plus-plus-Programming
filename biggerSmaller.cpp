#include<iostream>

using namespace std;

int main()
{
    int num1{}, num2{};
    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    if (num1==num2)
        cout << "Both numbers are equal";
    else 
    {
        cout << ((num1 > num2) ? "First" : "Second") << " number is bigger\n";
        cout << ((num1 < num2) ? "First" : "Second") << " number is smaller";
    }
        

}