#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	// init a sample vector with 3 elements
	vector<int> vecIntegers(3);

	fill(vecIntegers.begin(), vecIntegers.end(), 9);
	vecIntegers.resize(6);
	fill_n(vecIntegers.begin() + 3, 3, -9);

	cout << "Contents of the vector are: " << endl;
	for (size_t nIndex = 0; nIndex < vecIntegers.size(); ++nIndex) {
		cout << "Element [" << nIndex << "] = ";
		cout << vecIntegers[nIndex] << endl;
	}
	return 0;
}