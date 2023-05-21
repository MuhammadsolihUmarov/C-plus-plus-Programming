#include<iostream>

using namespace std;

int main()
{
    float length, width, height;
    float base_cost{2.50};
    double totalCost;
    float package_volume;
    cout << "Welcome to shipping platform!" << endl;
    cout << "Enter length, width, height of to be shipped item: (in inches) ";
    cin >> length >> width >> height;
    package_volume = length * width * height;
    cout << package_volume << endl;

    if (length>10||width>10||height>10)
    {
        cout << "Sorry we cannot ship an item more than 10 inches in height, width or length";
        return 1;
    }

    totalCost = base_cost * package_volume;
    //if package volume is more than 500, additional 25% cost will be added. If more than 100, 10% cost will be added.
    if (package_volume>500)
    {
        totalCost *= 1.25;
        //cout << "500\n";
    }

    else if (package_volume>100)
    {
        totalCost *= 1.1;
        //cout << "100\n";
    }

    cout << "Total cost for shipping: " << totalCost;
}   
