#include<iostream>

using namespace std;

int main()
{
    int i, j;
    cout << "....................Multiplication table....................\n";
    for (i = 1; i <= 10;i++)
    {
        for (j = 1; j <= 10;j++)
        {
            cout << i << " * " << j << " = " << i * j <<"  ";
        }
        cout << endl;
    }
    cout << "\n\n\n....................Addition table....................\n";
    for (i = 1; i <= 10;i++)
    {
        for (j = 1; j <= 10;j++)
        {
            cout << i << " + " << j << " = " << i + j<<"   ";
        }
        cout << endl;
    }
}