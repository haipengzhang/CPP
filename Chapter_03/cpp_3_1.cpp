#include <iostream>
using namespace std;

int main()
{
	cout << "This program will help you multiply two numbers" << endl;

	cout << "Enter the first number" << endl;
	int firstNumber = 0;
	cin >> firstNumber;

	cout << "Enter the second number" << endl;
	int secNumber = 0;
	cin >> secNumber;

	int multiResult = firstNumber * secNumber;

	cout << firstNumber << "x" << secNumber;
	cout << " = " << multiResult << endl;

	return 0;
}