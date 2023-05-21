#include<iostream>

using namespace std;

int main()
{
    int costSmall{25};
    int costLarge{35};
    float taxRate{0.06};
    int estimates{30};
    int NumLarge{0}, NumSmall{0};
    int totalCost, TaxCost, TotalLargeRoomCost, TotalSmallRoomCost;
    cout << "Enter how many large rooms do you want to get cleaned? ";
    cin >> NumLarge;
    cout << "Enter how many small rooms do you want to get cleaned? ";
    cin >> NumSmall;
    TotalLargeRoomCost = NumLarge * costLarge;
    TotalSmallRoomCost = NumSmall * costSmall;
    TaxCost = (TotalLargeRoomCost+TotalSmallRoomCost) * taxRate;
    totalCost = TotalLargeRoomCost + TotalSmallRoomCost;
    printf("Estimate for cleaning service\n");
    printf("Number of small rooms: %d\nNumber of large rooms: %d\n", NumLarge, NumSmall);
    printf("Price per small room: %d\nPrice per large room: %d\n", costSmall, costLarge);
    printf("Total cost: %d\nTax: %d\nTotal estimated cost: %d\nThis estimate is valid for 30 days", totalCost, TaxCost, totalCost + TaxCost);
    
}