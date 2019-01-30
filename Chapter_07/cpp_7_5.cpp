#include <iostream>
using namespace std;

int getFibNumber(int fibIndex)
{
	if (fibIndex < 2) {
		return fibIndex;
	} else {
		return getFibNumber(fibIndex - 1) + getFibNumber(fibIndex - 2);
	}
}

int main()
{
	cout << "Enter O-based index of desired fibnumber: ";
	int index = 0;
	cin >> index;

	cout << "Fibonacci number is " << getFibNumber(index) << endl;;
	return 0;
}