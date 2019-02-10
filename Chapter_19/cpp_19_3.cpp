#include <set>
#include <iostream>
using namespace std;

int main() {
	set<int> setIntegers;

	setIntegers.insert(43);
	setIntegers.insert(78);
	setIntegers.insert(-1);
	setIntegers.insert(124);

	for (auto iElement = setIntegers.cbegin();
		iElement != setIntegers.cend();
		++iElement) {
		cout << *iElement << endl;
	}

	auto iElementFound = setIntegers.find(-1);

	if (iElementFound != setIntegers.end()) {
		cout << "Element " << *iElementFound << " found!" << endl;
	} else {
		cout << "Element not found in set!" << endl;
	}

	auto iAnotherFind = setIntegers.find(12345);
	if (iAnotherFind != setIntegers.end()) {
		cout << "Element " << *iAnotherFind << " found!" << endl;
	} else {
		cout << "Element 12345 not found in set!" << endl;
	}

	return 0;
}