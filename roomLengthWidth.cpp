#include <iostream>

using namespace std;

int main()
{
    int width, length;

    cout << "Enter the room length: ";
    cin >> length;
    cout << "Enter the room width: ";
    cin >> width;

    cout << "The area of the room is " << width * length << " square feet";
    return 0;
}