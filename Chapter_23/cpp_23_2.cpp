#include <iostream>
#include <algorithm>
#include <vector>

template <typename elementType>
bool IsEven(const elementType& number) {
	return ((number % 2) == 0);
}

int main() {
	using namespace std;
	vector<int> vecIntegers;
	cout << "Populating a vector<int> with values from -9 to 9" << endl;
	for (int nNum = -9; nNum < 10; ++nNum) {
		vecIntegers.push_back(nNum);
	}

	size_t nNumZeroes = count(vecIntegers.begin(), vecIntegers.end(), 0);
	cout << "Number of instances of '0': " << nNumZeroes << endl << endl;

	size_t nNumEvenElements = count_if(vecIntegers.begin(), vecIntegers.end(), IsEven<int>);
	cout << "Number of even elements: " << nNumEvenElements << endl;
	cout << "Number of odd elements: ";
	cout << vecIntegers.size() - nNumEvenElements << endl; 

	return 0;
}