#include<iostream>

using namespace std;

int main()
{
    int num{};
    cout << "Please enter a number: ";
    cin >> num;

    while(num>0)
    {
        cout << num << endl;
        num--;
    }

    cout << "Thanks!";
}