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
	}

	// 如果用户输入n程序到这里就会崩溃
	cout << "Temperature is: " << *pTemperature;

	// 如果用户输入n程序，就不应该delete
	delete pTemperature;

	return 0;
}