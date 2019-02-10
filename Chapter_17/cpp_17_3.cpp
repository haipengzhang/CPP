#include <vector>
#include <iostream>
using namespace std;

void DisplayVector(const vector<int>& vecInput) {
	// auto == vector<int>::const_iterator
	for (auto iElement = vecInput.cbegin(); iElement != vecInput.cend(); ++iElement) {
		cout << *iElement << ' ';
	}
	cout << endl;
}

int main() {
	vector<int> vecIntegers(4, 90);
	DisplayVector(vecIntegers);

	vecIntegers.insert(vecIntegers.begin(), 25);
	vecIntegers.insert(vecIntegers.end(), 2, 25);

	DisplayVector(vecIntegers);

	vector<int> vecAnother(2, 30);
	vecIntegers.insert(vecIntegers.begin() + 1, vecAnother.begin(), vecAnother.end());

	DisplayVector(vecIntegers);

	return 0;
}