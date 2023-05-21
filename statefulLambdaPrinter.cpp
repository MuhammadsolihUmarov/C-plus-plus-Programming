#include <iostream>
#include <string>


int main()
{
    int x{100};
    //std::string x{"hi"};
    [x]() mutable
    { std::cout << x << std::endl;
    x++; }(); //We use mutable keyword to be able to change the copied value in lambda function

    [&x]()
    { std::cout << x << std::endl;
    x++; }(); //We reference to the actual variable to change the global keyword in lambda function

    std::cout << x << std::endl;//Displays 101 as we directly increased the value with previous lambda function
}