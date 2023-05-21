#include <iostream>
#include <vector>

using namespace std;

void print_if(vector<int> nums, auto func)
{
    for(int i : nums)
    {
        if (func(i))
        {
            cout << i<<"  ";
        }
    }
}

int main()
{
    vector<int> nums{};
    int num;
    bool stop = false;
    while (stop!=true)
    {
        cout << "Enter a number (-1 to stop): ";
        cin >> num;
        if (num==-1)
            break;
        nums.push_back(num);
    }
    cout << "Even numbers:" << endl;
    print_if(nums, [](auto x)
             { return x % 2 == 0; });
    cout << "\nOdd numbers:" << endl;
    print_if(nums, [](auto x)
             { return x % 2 == 1; });

    return 0;
}