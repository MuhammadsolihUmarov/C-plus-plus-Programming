#include <iostream>
#include <vector>

using namespace std;

void print(const int *const arr, int *size);

int *apply_all(int *arr1, int *arr2, int *size1, int *size2);


int main()
{
    int size1{3}, size2{5}, sizeAll{size1*size2};
    int test1[size1]{1, 2, 3};
    int test2[size2]{4, 5, 6, 7, 8};
    int *kingArr;

    cout << "First array: ";
    print(test1, &size1);
    cout << "Second array: ";
    print(test2, &size2);

    cout << "Both arrays multiplied memory efficiently..."<<endl;
    kingArr = apply_all(test1, test2, &size1, &size2);
    //cout << sizeAll; 8
    /*for (int i = 0; i < 15;i++)
    {
        cout<<kingArr[i]<<endl;
    }*/
    print(kingArr, &sizeAll);

    delete[] kingArr;

    return 0;
}


void print(const int *const arr, int *size) //First const is for not editing the ARRAY, second *const is for not editing the POINTER
{
    cout << "Numbers in the array: ";
    for (int i = 0; i < *size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int *apply_all(int *arr1, int *arr2, int *size1, int *size2)//Just pass integers for merging both arrays and return pointer
{
    int sizeAll = *size1 * *size2; //Accessing both sizes
    int *bigArr = new int[sizeAll]; //Initializing array in the heap
    int big{0};
    int i;

    for (i = 0; i < *size1;i++)
    {
        for (int j = 0; j<*size2; j++)
        {
            bigArr[big] = arr1[i] * arr2[j];
            big++;
            
        }
    }
    

        /*
            for (i = 0; i < *size1; i++)
            {
                bigArr[big] = arr1[i];
                big += 1;
            }

            for (i = 0; i < *size2;i++)
            {
                bigArr[big] = arr2[i];
                big += 1;
            }
        */
        return bigArr;
}