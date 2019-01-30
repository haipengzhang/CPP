#include <iostream>
using namespace std;

int main()
{
	try {
		int* pAge = new int[666666666777];
		delete[] pAge;
	} catch (bad_alloc) {
		cout << "Memory allocation failed!";
	}
	return 0;
}