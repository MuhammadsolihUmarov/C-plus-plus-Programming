#include<iostream>

using namespace std;

int main()
{
    int charge{30};
    float tax_rate{0.06};
    int roomNum;
    cout << "Enter how many rooms you would like to rent: ";
    cin >> roomNum;
    cout << "Estimates for carpet cleaning service\nNumber of rooms " << roomNum << "\nPrice per room: $" << charge << "\nCost: $" << charge * roomNum << "\nTax: $" << tax_rate * charge * roomNum << "\nTotal estimate: "<<tax_rate*charge*roomNum+charge*roomNum<< "\nThis estimate is valid for 30 days";
}