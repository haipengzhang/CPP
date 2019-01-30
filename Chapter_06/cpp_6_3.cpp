#include <iostream>
using namespace std;

int main()
{
	cout << "Enter two numbers: " << endl;
	float num1 = 0, num2 = 0;
	cin >> num1;
	cin >> num2;

	cout << "Enter d to divide, anthing else to multiply: ";
	char userInput = '\0';
	cin >> userInput;
	
	float result = 0.0f;
	if (userInput == 'd' && num2 != 0) {
		result = num1 / num2;
	} else {
		result = num1 * num2;
	}
	cout << "Result is " << result << endl;
	return 0;
}