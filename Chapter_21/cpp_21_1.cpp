#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

using namespace std;

// struct that behaves as a unary function
template <typename elementType>
struct DisplayElement {
	void operator() (const elementType& element) const {
		cout << element << ' ';
	}
};

int main() {
	vector<int> vecIntegers;
	for (int nCount = 0; nCount < 10; ++nCount) {
		vecIntegers.push_back(nCount);
	}

	list<char> listChars;
	for (char nChar = 'a'; nChar < 'k'; ++nChar) {
		listChars.push_back(nChar);
	}

	cout << "Displaying the vector of integers: " << endl;
	for_each (vecIntegers.begin(), vecIntegers.end(), DisplayElement<int>());

	cout << endl << endl;
	cout << "Displaying the list of characters: " << endl;
	for_each (listChars.begin(), listChars.end(), DisplayElement<char>());
}