#include <iostream>
using namespace std;

int main()
{
	int* pAge = new(nothrow) int[0xffffffff];
	if (pAge) {
		delete[] pAge;
	} else {
		cout << "Memory allocation failed!" << endl;
	}
	return 0;
}