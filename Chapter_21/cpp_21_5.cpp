#include <algorithm>
#include <iostream>
#include <vector>

template <typename elementType>
class Multiply {
public:
	elementType operator() (const elementType& elem1, const elementType& elem2) {
		return (elem1 * elem2);
	}
};

int main() {
	using namespace std;
	vector<int> vecMultiplicand, vecMultiplier;
	for (int nCount1 = 0; nCount1 < 10; ++nCount1) {
		vecMultiplicand.push_back(nCount1);
	}
	for (int nCount2 = 100; nCount2 < 110; ++nCount2) {
		vecMultiplier.push_back(nCount2);
	}

	vector<int> vecResult;
	// make space for the result of the multiplication
	vecResult.resize(10);
	transform(vecMultiplicand.begin(),
		vecMultiplicand.end(),
		vecMultiplier.begin(),
		vecResult.begin(),
		Multiply<int>());
	
	for (size_t nIndex1 = 0; nIndex1 < vecMultiplicand.size(); ++nIndex1) {
		cout << vecMultiplicand[nIndex1] << ' ';
	}
	cout << endl;

	for (size_t nIndex2 = 0; nIndex2 < vecMultiplier.size(); ++nIndex2) {
		cout << vecMultiplier[nIndex2] << ' ';
	}
	cout << endl << endl;

	for (size_t nIndex = 0; nIndex < vecResult.size(); ++nIndex) {
		cout << vecResult[nIndex] << ' ';
	}

	return 0;
}