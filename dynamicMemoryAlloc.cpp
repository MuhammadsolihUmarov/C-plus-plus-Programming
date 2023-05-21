#include <iostream>

using namespace std;

int main()
{
    int size{};
    cout << "Enter the size of the vector: ";
    cin >> size;

    int *arrPointer{nullptr};
    arrPointer = new int[size+1]; //New double memory for the size)

    for (int i = 1; i <= size; i++)
    {
        arrPointer[i] = i;
    }
    cout << "Prints 1 to " << size << endl;
    for (int i = 1; i <= size; i++)
    {
        cout << arrPointer[i] << "  ";
    }

    delete[] arrPointer; // Deleting array pointer from memory
}