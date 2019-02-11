#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

template <typename T>
void DisplayContents(const T& input) {
	for (auto iElement = input.cbegin();
		iElement != input.cend();
		++iElement) {
		cout << *iElement << endl;
	}
}

int main() {
	vector<int> vecIntegers;
	for (int nNum = -9; nNum < 10; ++nNum) {
		vecIntegers.push_back(nNum);
	}
	vecIntegers.push_back(9);
	vecIntegers.push_back(9);

	list<int> listIntegers;
	for (int nNum = -4; nNum < 5; ++nNum) {
		listIntegers.push_back(nNum);
	}

	cout << "The contents of the sample vector are: " << endl;
	DisplayContents(vecIntegers);

	cout << "search() for the contents of list in vector:" << endl;
	auto iRange = search(vecIntegers.begin(), vecIntegers.end(), listIntegers.begin(), listIntegers.end());
	if (iRange != vecIntegers.end()) {
		cout << "Sequence in list found in vector at position: ";
		cout << distance(vecIntegers.begin(), iRange) << endl;
	}

	cout << "Search {9,9,9} in vector using search_n(): " << endl;
	auto iPartialRange = search_n(vecIntegers.begin(), vecIntegers.end(), 3, 9);
	if (iPartialRange != vecIntegers.end()) {
		cout << "Sequence {9,9,9} found in vector at position: ";
		cout << distance(vecIntegers.begin(), iPartialRange) << endl;
	}

	return 0;
}