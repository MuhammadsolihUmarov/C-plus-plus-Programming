#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Test 
{
private:
    int data;
public:
    Test() : data{0} { cout << "Test constructor (" << data << ")" << endl; }
    Test(int num) : data{num} { cout << "Test constructor (" << data << ")" << endl; }
    int get_data() const { return data; }
    ~Test() { cout << "Test destructor (" << data << ")" << endl; }
};

int main()
{
    Test *t1 = new Test{1};
    cout << "Memory leak with raw pointer... (Pointer is not destroyed)" << endl;
    cout << "Smart pointers: " << endl;
    unique_ptr<Test> p1 {new Test{100}};
    unique_ptr<Test> p2 = make_unique<Test>(1000);

    unique_ptr<Test> p3;
    //p3 = p1; //Compile error
    p3 = move(p1);   //Moving the ownership

    vector<unique_ptr<Test>> Pointers;
    //Pointers.push_back(p1);    
    Pointers.push_back(move(p2));
    Pointers.push_back(move(p3));
    for (auto &pointers: Pointers)
    {
        cout << "Pointer " <<&pointers <<" is pointing to "<< pointers->get_data() << endl;
    }

    cout << "\n===========================================================================\nCustom deleting using lambda function" << endl;
    shared_ptr<Test> c1 (new Test{500},
         [](Test *ptr){
             cout << "Custom deleting from the heap..." << endl;
             delete ptr;
         });

    return 0;
}