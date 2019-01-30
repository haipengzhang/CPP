#include <iostream>
using namespace std;

int main()
{
	cout << "Enter two integers:" << endl;
	int num1 = 0, num2 = 0;
	cin >> num1;
	cin >> num2;
	
	cout << "Enter \'m\' to multiply, anything else to add: " << endl;
	char userInput = '\0';
	cin >> userInput;

	int result = 0;
	if (userInput == 'm') {
		result = num1 * num2;
	} else {
		result = num1 + num2;
	}
	cout << "Result is: " << result << endl;
	return 0;
}