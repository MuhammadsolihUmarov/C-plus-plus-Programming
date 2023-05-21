#include "Money.h"
#include <iostream>

using namespace std;

int main() {
    int *dollars = new int, *cents = new int; //Dynamically allocate memory from heap
    cout << "Welcome to the dollar, cent printer using overloaded operators" << endl;
    cout << "Enter dollars: ";
    cin >> *dollars;
    cout << "Enter cents: ";
    cin >> *cents;
    Money amount {*dollars, *cents};
    std::cout << amount;
    delete dollars; //Deallocating the memory
    delete cents;
    return 0;
}
