#include <iostream>
using namespace std;

int main()
{
	const int ARRAY1_LEN = 3;
	const int ARRAY2_LEN = 2;

	int myInt1[ARRAY1_LEN] = {35, -3, 0};
	int myInt2[ARRAY2_LEN] = {20, -1};

	cout << "Multiplying each int in myInt1 by each in myInt2: " << endl;

	for (int array1Index = 0; array1Index < ARRAY1_LEN; array1Index++) {
		for (int array2Index = 0; array2Index < ARRAY2_LEN; array2Index++) {
			cout << myInt1[array1Index] << " x " << myInt2[array2Index] << " = " << myInt1[array1Index] * myInt2[array2Index] << endl;
		}
	}
	return 0;
}