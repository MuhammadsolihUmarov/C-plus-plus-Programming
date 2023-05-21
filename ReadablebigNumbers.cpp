#include<iostream>

int main()
{
    long long people_on_eath  {8'000'000'000}; //We used list initialization instead of = sign to catch memory overflow errors
    std::cout << "There are more than " << people_on_eath << " people on Earth.";

    return 0;
}