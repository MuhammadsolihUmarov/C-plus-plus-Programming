#include <iostream>

using namespace std;

int main()
{
    cout << "just integer (1=true, 0=false)-> (10=10): " << (10 == 10) << endl;
    cout << "just integer (1=true, 0=false)-> (10=20): " << (10 == 20) << endl;
    cout << boolalpha;           //Modifying the output stream object to output boolean values instead of 1 and 0 
    cout << "boolalpha (10=10): "<< (10 == 10) << endl;
    cout << "boolalpha (10=20): "<< (10 == 20) << endl;
    cout << noboolalpha;         //Modifying the output stream output no boolean value but integer value
    cout << "just integer (1=true, 0=false)-> (10=10): " << (10 == 10) << endl;
    cout << "just integer (1=true, 0=false)-> (10=20): " << (10 == 20) << endl;

    int num{100};
    cout << dec << num << endl;
    cout << hex << num << endl;
    cout << oct << num << endl;
    cout << "================================================" << endl;
    cout << showbase; //Bases are now explicit and more readable in the output
    cout << dec << num << endl;
    cout << hex << num << endl;
    cout << oct << num << endl;
}