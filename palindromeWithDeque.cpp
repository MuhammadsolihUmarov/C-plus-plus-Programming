#include <iostream>
#include <deque>


using namespace std;

bool is_palindrome(const string &s)
{
    deque<char> deq;

    //Filling the deq
    for (char c : s)
    {
        if (isalnum(c))
        {
            deq.push_back(toupper(c));
        }
    }

    //Comparing the deq if it is a polindrome
    //cout << deq.size() << endl;
    while (deq.size()>1)
    {
        if (deq.front() != deq.back())
            return false;
        //cout << deq.front() << "  " << deq.back() << endl;
        deq.pop_front();
        deq.pop_back();
    }

    return true;
}


int main()
{
    string inp;
    cout << "Enter a string/sentence to know if it is polindrome: ";
    getline(cin, inp);

    //cout << inp << endl;
    if (is_palindrome(inp))
    {
        cout << "It is a polindrome" << endl;
    }
    else
    {
        cout << "It is not a polindrome" << endl;
    }

    return 0;
}