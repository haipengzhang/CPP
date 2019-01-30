#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "How many integers you wish to enter? ";
	int inputNums = 0;
	cin >> inputNums;

	int *pNumbers = new int[inputNums];

	cout << "Successfully allocated memory for " << inputNums << " integers" << endl;
	for (int index = 0; index < inputNums; ++index) {
		cout << "Enter number " << index << ": ";
		cin >> *(pNumbers + index);
	}

	cout << "Display all numbers input: " << endl;
	int index = 0;
	for (int *pCopy = pNumbers; index < inputNums; ++index) {
		cout << *(pCopy++);
	}
	cout << endl;

	delete[] pNumbers;
	return 0;
}