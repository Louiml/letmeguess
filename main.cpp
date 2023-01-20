#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    int number;
    cout << "Think of a number between 1-100" << endl;
    cout << "What's your number? ";
    cin >> number;
    cout << "Your random number is: " << randomNumber << endl;

    return 0;
}
