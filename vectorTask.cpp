#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> vector1{};
    vector <int> vector2{};
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "Elements in the vector 1: " << vector1.at(0) <<"  "<< vector1.at(1) << endl;
    cout << "Size of vector 1: " << vector1.size() << endl;
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "Elements in the vector 2: " << vector2.at(0) << "  " << vector2.at(1) << endl;
    cout << "Size of vector 2: " << vector2.size() << endl;

    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    int row = 1;
    cout << "Vector 2: ";
    for (int i = 0; i < 2; i++)
    {
        cout << "  " << vector_2d.at(row).at(i);
    }
    cout << endl;
    vector_2d.at(0).at(0) = 1000;

    for (int i = 0; i < 2;i++)
    {
        cout << "Vector " << i+1 << ": ";
        for (int j = 0; j < 2;j++)
        {
            cout << "  " << vector_2d[i][j];
        }
        cout << endl;
    }
}