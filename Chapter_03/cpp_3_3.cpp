#include <iostream>
using namespace std;

// three global integers
int firstNumber = 0;
int secNumber = 0;
int multiResult = 0;

void multiNumbers()
{
	cout << "This program will help you multiply two numbers" << endl;

	cout << "Enter the first number" << endl;
	cin >> firstNumber;

	cout << "Enter the second number" << endl;
	cin >> secNumber;

	multiResult = firstNumber * secNumber;

	cout << firstNumber << "x" << secNumber;
	cout << " = " << multiResult << endl;
}

int main()
{
	multiNumbers();
	cout << "Display from main(): ";
	cout << firstNumber << " x " << secNumber;
	cout << " = " << multiResult << endl;
	return 0;
}


