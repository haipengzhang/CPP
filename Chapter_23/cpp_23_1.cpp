#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	using namespace std;
	vector<int> vecIntegers;

	for (int sampleValue = -9; sampleValue < 10; ++sampleValue) {
		vecIntegers.push_back(sampleValue);
	}

	cout << "Enter number to find in collection: ";
	int numToFind = 0;
	cin >> numToFind;

	auto iElementFound = find(vecIntegers.cbegin(), vecIntegers.cend(), numToFind);

	if (iElementFound != vecIntegers.cend()) {
		cout << "Result:Value " << *iElementFound << " found!" << endl;
	} else {
		cout << "Result: No element contains value " << numToFind << endl;
	}

	cout << "Finding the first even number using find_if: " << endl;

	auto iEvenNumber = find_if(vecIntegers.cbegin(), vecIntegers.cend(), [](int element){
		return (element % 2) == 0;
	});
	if (iEvenNumber != vecIntegers.cend()) {
		cout << "Number '" << *iEvenNumber << "' found at position[";
		cout << distance(vecIntegers.cbegin(), iEvenNumber);
		cout << "]" << endl;
	}

	return 0;
}