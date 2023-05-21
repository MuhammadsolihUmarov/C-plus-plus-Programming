#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string line;
    int num_i;
    double num_d;
    ifstream file;

    file.open("../Text_file.txt");
    if (!file)
    {
        cout << "We could not open the file :(" << endl;
        exit(1);
    }

    //file >> line; //Reads one word at a time
    //getline(file, line); //Reads entire line

    /*file >> line >> num_i >> num_d; //Order of extraction is important
    cout << num_i << " " << num_d << " " << line;*/

    while(file >> line >> num_i >> num_d)
    {
        cout << setw(10) << left << line
             << setw(10) << num_i
             << setw(10) << num_d << endl;
    }

    file.close();
}