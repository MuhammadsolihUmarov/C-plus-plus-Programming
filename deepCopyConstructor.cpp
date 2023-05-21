#include <iostream>

using namespace std;

class someProduct
{
private:
    int *data;

public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }

    someProduct(int num); //Constructor
    someProduct(const someProduct &source);//Copy constructor
    //~someProduct();
};

someProduct::someProduct(int num)
{
    data = new int;
    *data = num;
}

someProduct::someProduct(const someProduct &source)
    : someProduct(*source.data)
{
    //cout << "Deep copy initialized..." << endl;
}


/*someProduct::~someProduct()
{
    delete data;
    cout << "Source is freed!" << endl;
}*/


void display(someProduct obj, char message)
{
    cout << message << " object = " << obj.get_data_value() << endl;
}

int main()
{
    char message;
    someProduct x{100};
    message = 'X';
    display(x, message);

    someProduct y{x};
    message = 'Y';
    display(y, message);

    x.set_data_value(200);
    message = 'X';
    display(x, message);
    message = 'Y';
    display(y, message);

    return 0;
}