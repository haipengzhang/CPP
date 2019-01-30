#include <iostream>
using namespace std;

int main()
{
	int* pTemperature;

	cout << "Is it sunny (y/n)?";
	char userInput = 'y';
	cin >> userInput;

	if (userInput == 'y') {
		pTemperature = new int;
		*pTemperature = 30;

		cout << "Temperature is: " << *pTemperature;
		delete pTemperature;
	}

	return 0;
}