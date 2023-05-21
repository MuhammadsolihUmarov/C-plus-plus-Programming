#include <iostream>

using namespace std;

int main()
{
    int *p;
    cout << "Value of p is " << p << endl;
    cout << "Adress of p is " << &p << endl;
    cout << "Size of p is " << sizeof p << endl;
    p = nullptr; // You could also do p{nullptr}
    cout << "Value of p after setting it to 0: " << p << endl;
}