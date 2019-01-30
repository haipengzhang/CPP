#include <iostream>
using namespace std;

int main()
{
	const int ARRAY_LEN = 5;
	int myNumber[ARRAY_LEN] = {24, -1, 365, -999, 2019};

	// pointer initialized to first element in array
	int *pNumbers = myNumber;
	
	for (int i = 0; i < ARRAY_LEN; ++i) {
		cout << "Use Array pointer Element at " << i << " : " << *(myNumber + i) << endl;
		cout << "Use Array snytax Element at " << i << " : " << pNumbers[i] << endl;
	}

	return 0;
}