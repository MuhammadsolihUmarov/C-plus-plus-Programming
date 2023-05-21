#include<iostream>
#include<vector>

using namespace std;

void printer(int num);

void printNumbers(vector<int> numbers);

void smallestNumPrint(vector<int> numbers);

void largestNumPrint(vector<int> numbers);

void NumAdderToVector(vector<int> &numbers);

void manager(char oper, vector<int> &nums);

void toUpper(char &oper);

void searchNum(vector<int> nums);

void clearVector(vector<int> &vec);

void meanPrint(vector<int> nums);


int main()
{
    vector<int> numbers{};
    char operation{};
    string message;

    message = "\n\tEnter (\n\t'P' to print the numbers,\n\t'A' to add an element,\n\t'M' to display mean of the entered numbers,\n\t'L' to display the largest number,\n\t'S' to display the smallest number,\n\t'Q' to quit the app,\n\t'E' to search a number,\n\t'C' to clear out the vector): ";

    cout << message << endl << "Enter an operation code: ";
    cin >> operation;
    toUpper(operation);
    manager(operation, numbers);

    return 0;
}


//General manager
void manager(char oper, vector<int> &nums)
{
    while (oper != 'Q') {
        if (oper == 'A') {
            NumAdderToVector(nums);
        } 
        else if (oper == 'P') {
            printNumbers(nums);
        }
        else if (oper == 'M'){
            meanPrint(nums);
        }
        else if (oper == 'L'){
            largestNumPrint(nums);
        }
        else if (oper=='S'){
            smallestNumPrint(nums);
        }
        else if (oper == 'E')
        {
            searchNum(nums);
        }
        else if (oper == 'C'){
            clearVector(nums);
        }
        else {
            cout << "Invalid operation code. Try again.\n" << endl;
        }
        cout << "Enter next operation code: ";
        cin >> oper;
        toUpper(oper);
    }
}

//Number searcher
void searchNum(vector<int> nums)
{
    int num;
    int freq{0};
    cout << "\nEnter a number to search: ";
    cin >> num;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == num)
        {
            if (freq==0)
                cout << "Number "<<num <<" exists in the orders: " << i + 1;
            if (freq>0)
                cout << "  " << i + 1;
            freq += 1;
        }
    }
    cout << endl;
    cout << "Total number " << num << " appeared " << freq << " times\n";
    cout << endl;
}

//Mean printer
void meanPrint(vector<int> nums)
{
    if (nums.size()==0)
    {
        cout << "The vector is empty" << endl;
        return;
    }
    int total{}, i{};
    int size{};
    size = nums.size();
    for (i = 0; i < size; i++)
    {
        total += nums[i];
    }
    cout << "Mean of the numbers in the vector = " << total / size << endl;
}


//Smallest or largest number printer
void smallestNumPrint(vector<int> numbers)
{
    if (numbers.size()==0)
    {
        cout << "The vector is empty" << endl;
        return;
    }

    int smallest = numbers[0];
    for (int i = 1; i < numbers.size(); i++)
    {
        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
    }
    printer(smallest);
}


void largestNumPrint(vector<int> numbers)
{
    if (numbers.empty())
    {
        cout << "The vector is empty" << endl;
        return;
    }

    int largest = numbers[0];
    for (int i = 1; i < numbers.size(); i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }
    printer(largest);
}



//Number adder
void NumAdderToVector(vector<int> &numbers)
{
    int num{};
    cout << "Enter a number to add: ";
    cin >> num;
    numbers.push_back(num);
    cout << num << " is added!" << endl;
}


//Upper case converter
void toUpper(char &oper)
{
    if (oper >= 'a' && oper <= 'z')
    {
        oper -= ('a' - 'A');
    }
}


//Vector clearer
void clearVector(vector<int> &vec)
{
    if (vec.size()==0)
    {
        cout << "\nThe vector is actually empty\n" << endl;
        return;
    }
    vec.clear();
    cout << "\n Cleared!" << endl;
}


//Numbers in the vector printer
void printNumbers(vector<int> numbers)
{
    if (numbers.size()==0)
    {
        cout << "There are no numbers to print!\n";
    }
    else
    {
        int i{};
        cout << "Numbers in the vector: ";
        for (i = 0; i < numbers.size(); i++)
        {
            cout << numbers[i] << "  ";
        }
        cout << endl;
    }
}

void printer(int num)
{
    cout << num << endl;
}