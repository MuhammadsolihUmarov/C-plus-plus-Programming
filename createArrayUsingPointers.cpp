#include <iostream>

using namespace std;


int *createArray(int size, int init_value) //Returns pointer
{
    /*Initializes and returns an array according to the size and init_value parameters.*/
    int *new_storage{nullptr}; //Initializes a pointer
    int i;
    new_storage = new int[size]; //Creates an array of integers in the heap

    for (i = 0; i < size; i++)
    {
        *(new_storage+i) = init_value; //same as: new_storage[i] = init_value
    }

    return new_storage;
}


void display(const int *const array, int size)//array pointer comes as a parameter. Array is made uneditable with const
{
    int i;
    for (i = 0; i < size;i++)
    {
        cout << array[i] << "  "; // same as cout<< *(array+i);
    }
    cout << endl;
}


int main()
{
    int *myArray{nullptr}; 
    int size{};
    int init_val{};

    cout << "How many items do you want in the array? ";
    cin >> size;
    cout << "Enter a value to all of them: ";
    cin >> init_val;

    myArray = createArray(size, init_val); //We will point to the first element of the returned array

    display(myArray, size);

    delete[] myArray;//Freeing heap memory

    return 0;
}