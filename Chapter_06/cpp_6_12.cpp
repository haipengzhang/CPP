#include <iostream>
using namespace std;

int main()
{
	for (;;) {
		cout << "Enter two integers: " << endl;
		int num1 = 0, num2 = 0;
		cin >> num1;
		cin >> num2;

		cout << "Do you wish to correct the numbers? (y/n): ";
		char changeNumbers = '\0';
		cin >> changeNumbers;

		if (changeNumbers == 'y') {
			continue;
		}

		cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

		cout << "Press x to exit(x) or any other key to recaculate" << endl;
		char userSelection = '\0';
		cin >> userSelection;

		if (userSelection == 'x') {
			break;
		}
		cout << "Goodbye!" << endl;

		return 0;
	}
}