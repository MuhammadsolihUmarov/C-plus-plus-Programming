#include <iostream>

using namespace std;

void swap(int *num1, int *num2)
{
    int temp = *num1; //Storing the num1's memory location
    *num1 = *num2; //Changing num1's memory location replacing it to num2's memory location
    *num2 = temp; //Changing num1's memory location replacing it to the address stored in temp
}

int main()
{
    int inp1{10}, inp2{50};
    cout << "Variables before swap: inp1 = " << inp1 << ", inp2 = " << inp2 << endl;
    swap(&inp1, &inp2);
    cout << "Variables after swap: inp1 = " << inp1 << ", inp2 = " << inp2 << endl;
}