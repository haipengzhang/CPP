#include <set>
#include <iostream>
using namespace std;

template <typename T>
void DisplayContents(const T& input) {
	for (auto iElement = input.cbegin(); iElement != input.cend(); ++iElement) {
		cout << *iElement << ' ';
	}
	cout << endl;
}

typedef multiset<int> MSETINT;

int main() {
	MSETINT msetIntegers;
	msetIntegers.insert(43);
	msetIntegers.insert(78);
	msetIntegers.insert(78);
	msetIntegers.insert(-1);
	msetIntegers.insert(124);

	cout << "multiset contains " << msetIntegers.size() << " elements.";
	cout << " These are: " << endl;

	// write contents of the multiset to the screen
	DisplayContents(msetIntegers);

	cout << "Please enter a number to be erased from the set" << endl;
	int nNumberToErase = 0;
	cin >> nNumberToErase;

	cout << "Erasing " << msetIntegers.count(nNumberToErase);
	cout << " instances of value " << nNumberToErase << endl;

	// try finding an element 
	msetIntegers.erase(nNumberToErase);

	cout << "multiset contains " << msetIntegers.size() << " elements.";
	cout << " These are: " << endl;
	DisplayContents(msetIntegers);

	return 0;
}