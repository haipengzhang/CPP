#include <iostream>
using namespace std;

// 使用catch(...)处理所有异常
int main() {
	cout << "Enter number of integers you wish to reserve: ";
	try {
		int input = 0;
		cin >> input;

		// request memory space and the return it
		int* pReservedInts = new int[input];
		delete[] pReservedInts;
	} catch (...) {
		cout << "Exception encountered. Got to end, sorry!" << endl;
	}
	return 0;
}