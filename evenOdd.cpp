#include<iostream>

using namespace std;

int main()
{
    int num{};

    cout << "Enter a number: ";
    cin >> num;

    /*if (num%2==0)
        cout << num << " is even";
    else
        cout << num << " is odd";*/
    
    //Let's reduce the code to 1 line of code!
    cout << num << " is " << ((num % 2 == 0) ? "even" : "odd");
}