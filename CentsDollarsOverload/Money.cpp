#include "Money.h"

Money::Money(int dollars, int cents) : dollars(dollars), cents(cents) {}
Money::Money(int total) : dollars(total / 100), cents(total % 100) {}

std::ostream &operator<<(std::ostream &os, const Money &money) //Overloading the << operator
{
    os << "Dollars: " << money.dollars << " Cents: " << money.cents;
    return os;
}
