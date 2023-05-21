#ifndef _MONEY_H
#define _MONEY_H

#include <iostream>

class Money
{
private:
    int dollars;
    int cents;

public:
    Money(int dollars, int cents);
    Money(int total);

    friend std::ostream &operator<<(std::ostream &os, const Money &money);
};

#endif
