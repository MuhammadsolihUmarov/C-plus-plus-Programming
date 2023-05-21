#include <iostream>

using namespace std;

class Base
{
    int value; //default is private
public:
    Base() : value{0} 
    {
        cout << "Base no-args constructor is invoked with value = 0" << endl;
    }
    Base(int x) : value(x)
    {
        cout << "Base 1 arg constructor is invoked with value = " <<x<< endl;
    }
    ~Base()
    {
        cout << "Base class is destroyed" << endl;
    }



    int get_value()
    {

        return value;
    }
};


class Derived : public Base
{
    int val_in_derived_class;
public:
    Derived() : Base{}, val_in_derived_class{0}
    {
        cout << "Derived no-args constructor is called" << endl;
    }
    Derived(int x) : Base{x}, val_in_derived_class{x*2} 
    /*Here we are basically saying call Base class with the entered value
    and initialize the veriable val_in_derived_class to twice times the entered input*/
    {
        cout << "Derived 1 arg constructor is called" << endl;
    }
    ~Derived()
    {
        cout << "Derived class is destroyed" << endl;
    }
};

int main()
{
    Base instance_Base;
    /*if (instance_Base.get_value() == 0)
    {
        cout << "Yes value is really 0" << endl;
    }
    else
    {
        cout << "Compiler error. Value is not 0" << endl;
    }*/
    Base another_instance{12};

    cout << "----------------------------------------------" << endl;

    Derived derived_instance;
    Derived another_deriver_instance{999};
    /*Base class is destroyed every time the Derived class is destroyed as it is inherited in the constructor*/
}