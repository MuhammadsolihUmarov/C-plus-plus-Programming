#include <iostream>

using namespace std;

class someProducer
{
public:
    int x, y;
    someProducer(int sizex, int sizey) //Initializer
    {
        x = sizex;
        y = sizey;
    }

    //shallow copy Constructor
    someProducer(const someProducer &oldObj)
    :   x(oldObj.x), y(oldObj.y)
    {
        
        cout << "Copy constuctor is called (" << x << ", " << y << ')' << endl;
    }
};

int main()
{
    someProducer oldProduct(1, 2);

    cout << "oldProduct.x: " << oldProduct.x << endl;
    cout << "oldProduct.y: " << oldProduct.y << endl;
    oldProduct.x = 10; //Changing oldProduct object's value

    someProducer newProduct = oldProduct;//Object values are copied here using copy constructor

    cout << "newProduct.x: " << newProduct.x << endl; //=10 Because this is shallow copy (copy of the pointer), storage this both are pointing to is the same
    cout << "newProduct.y: " << newProduct.y << endl;

}