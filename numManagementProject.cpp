#include<iostream>
#include<vector>

using namespace std;


int main()
{
    vector<int> numbers{};
    char action{};
    int i, numAdd, numSearch, exit{0}, freq{0};
    int totalSum{0}, biggestNum{-99999999}, smallestNum{999999999};

    while (exit!=1)
    {
        cout << "\n\nEnter (\n'P' to print the numbers, \n'A' to add an element, \n'M' to display mean of the entered numbers, \n'L' to display the largest number, \n'S' to display the smallest number, \n'Q' to quit the app \n'N' to search a number\n'C' to clear out the vector): ";
        cin >> action;
        switch(action)
        {
            case 'P':
            case 'p':
                if (numbers.size() == 0)
                {
                    cout << "\n\n\nThe vector is empty! First add a number to a vector";
                    break;
                }

                cout << "\n\n\nNumbers in the vector: ";
                for (i = 0; i < numbers.size();i++)
                {
                    cout << numbers[i] << "  ";
                }
                cout << endl;
                break;

            case 'A':
            case 'a':
                cout << "\n\n\nEnter a number to add: ";
                cin >> numAdd;
                numbers.push_back(numAdd);
                cout << numAdd <<" added!" << endl;
                break;

            case 'm':
            case 'M':
                if (numbers.size()==0)
                {
                    cout << "\n\n\nUnable to calculate the mean. No data! First add a number to a vector";
                    break;
                }

                cout << "\n\n\nMean of the current vector: ";
                for (i = 0; i < numbers.size(); i++)
                {
                    totalSum += numbers[i];
                }
                cout << (double)totalSum / numbers.size() << endl;
                totalSum = 0;
                break;

            case 'l':
            case 'L':
                if (numbers.size()==0)
                {
                    cout << "\n\n\nCannot find the largest number. No data! First add a number to a vector";
                    break;
                }

                cout << "\n\n\nLargest number of the vector: ";
                for (i = 0; i < numbers.size(); i++)
                {
                    if (numbers[i]>biggestNum)
                        biggestNum = numbers[i];
                }
                cout << biggestNum << endl;
                break;

            case 's':
            case 'S':
                if (numbers.size()==0)
                {
                    cout << "\n\n\nCannot find the smallest number. No data! First add a number to a vector";
                    break;
                }

                cout << "\n\n\nSmallest number of the vector: ";
                for (i = 0; i < numbers.size(); i++)
                {
                    if (numbers[i]<smallestNum)
                        smallestNum = numbers[i];
                }
                cout << smallestNum << endl;
                break;

            case 'q':
            case 'Q':
                cout << "\n\n\nGood Bye!";
                exit = 1;
                break;

            case 'N':
            case 'n':
                if (numbers.size()==0)
                {
                    cout << "\n\n\nThe vector is empty. What do you search?!";
                    break;
                }

                cout << "\n\n\nEnter a number to know its frequency: ";
                cin >> numSearch;
                for (i = 0; i < numbers.size(); i++)
                {
                    if (numSearch==numbers[i])
                    {
                        freq++;
                    }
                }
                cout << "\n\n\n" << numSearch << "'s frequency in the vector is " << freq;
                freq = 0;
                break;

                case 'C':
                case 'c':
                    numbers.clear();
                    cout << "\n\n\nThe vector is cleared!" << endl;
                    break;

                default:
                    cout << "\n\n\nUnknown command!";
        }
    }
    
}