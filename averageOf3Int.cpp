#include<iostream>

using namespace std;

int main()
{
    //numX{} is done for initializing the number to 0
    int num1{}, num2{}, num3{};
    double average{};
    int total{3};
    cout << "Enter 3 numbers to find its average (ex: 1 2 3): ";
    cin >> num1 >> num2 >> num3;

    average = (num1 + num2 + num3) / static_cast<double>(total);
    cout << "Average of the entered numbers: "<<average;
}