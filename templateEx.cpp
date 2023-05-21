#include <iostream>
#include <string>

using namespace std;

template <typename T1, typename T2>
class Class
{
    T1 className;
    T2 student_count;
public:
    void print()
    {
        cout << className << " has " << student_count << " students." << endl;
    }
    Class(T1 name, T2 num)
    :className{name}, student_count{num}{}
};


int main()
{
    Class<string, int> seventhClass{"Leaving class", 20};
    seventhClass.print();
}

/*template <template T>
class Person
{
private:
    string name;
    int age;
    p Personality;
}*/