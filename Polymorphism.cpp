#include <iostream>

using namespace std;


class Base
{
public:
    virtual void say_hello()
    {
        cout << "Hello from Base class" << endl;
    }
    virtual ~Base()
    {
        cout << "Base virtual function is destroyed" << endl;
    }
};


class Derived : public Base
{
    public:
    virtual void say_hello() override
    {
        cout << "Hello from Derived class" << endl;
    }
    virtual ~Derived()
    {
        cout << "Derived virtual function is destroyed" << endl;
    }
};


void greetings(Base &obj) //Pass by reference to resolve the issue of slicing
{
    cout << "Greetings ";
    obj.say_hello(); 
    cout << endl;
};


int main()
{
    Derived obj;
    greetings(obj);
}