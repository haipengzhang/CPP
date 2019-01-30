#include <iostream>
using namespace std;

int main()
{
	const int Array_Length = 5;
	int myInts[Array_Length] = {0};

	cout << "Populate array of " << Array_Length << " integers " << endl;
	for (int arrayIndex = 0; arrayIndex < Array_Length; ++arrayIndex) {
		cout << "Enter an integer for element " << arrayIndex << ": ";
		cin >> myInts[arrayIndex];
	}
	cout << "Displaying contents of the array:" << endl;

	for (int arrayIndex = 0; arrayIndex < Array_Length; ++arrayIndex) {
		cout << "Element " << arrayIndex << " = " << myInts[arrayIndex] << endl;
	}
	return 0;
}