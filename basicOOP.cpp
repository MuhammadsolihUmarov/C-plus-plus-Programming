#include <iostream>
#include <string>
#include <cctype>


using namespace std;

//bool sizeCheck(string inp);

class Account;

class Employee;

bool ToUpper(char *inp);

void secondMain(Account user1, char operationType, bool conditionChar);


class Employee
{
public:
    string name{};
    double salary{};

    void newSalary(double money) 
    { 
        salary = money;
        cout << "New salary "<<salary<< " for the employee " << name << " is set" << endl;
    }
};


class Account
{
public:
    string name{};
    double balance{0};

    void withdraw(double money)
    {
        balance -= money;
        cout << "Withdrawn: " << money << endl;
        cout << "Current balance: " << balance << endl;
    }
    void deposit(double money)
    {
        balance += money;
        cout << "Deposited: " << money << endl;
        cout << "Current balance: " << balance << endl;
    }
    void displayBalance()
    {
        cout << "Balance: " << balance << endl;
    }
};



int main()
{
    Account user1;
    Account user2;
    char operationType;//Operation user is going to perform
    bool conditionChar; //Whether or not the condition is entered correctly
    user1.name = "Muhammadsolih";
    user1.balance = 0;
    cout << "Operation 1 is being carries out for " << user1.name << endl;
    cout << "Enter operation type you want to do? (d-deposit, w-withdraw, b-balance check, q-quit): ";
    cin >> operationType;
    conditionChar = ToUpper(&operationType);
    secondMain(user1, operationType, conditionChar);
}


void secondMain(Account user1, char operationType, bool conditionChar)
{
    double money;
    while(operationType != 'Q')
    {
        if (conditionChar)
        {
            //cout << "Yeah1";

            switch(operationType)
            {
                //cout << "Yeah2";
                case 'D':
                    cout <<"Enter the amount to deposit: ";
                    cin >> money;
                    user1.deposit(money);
                    break;
                case 'W':
                    cout << "Enter the amount to withdraw: ";
                    cin >> money;
                    user1.withdraw(money);
                    break;
                case 'B':
                    user1.displayBalance();
                    break;
            }
        }
        else 
        {
            cout << "Please enter a character!" << endl;
            break;
        }
        cout << "Enter next operation type you want to do? (d-deposit, w-withdraw, b-balance check, q-quit): ";
        cin >> operationType;
        conditionChar = ToUpper(&operationType);
    }
}


bool ToUpper(char *inp)
{
    if ((*inp) >= 'a' && (*inp) <= 'z')
    {
        (*inp) -= 'a' - 'A';
        return true;
    }
    else if ((*inp)>='A' && (*inp)<='Z')
    {
        return true;
    }
    else
    {
        return false; 
    }
}

/*bool sizeCheck(string inp)
{
    int size{0};
    for (char str:inp)
    {
        if (str=='\0')
            break;
        size += 1;
    }
    if (size!=1)
        return false;
    return true;
}*/