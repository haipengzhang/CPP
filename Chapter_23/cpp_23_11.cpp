#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool isEven(const int& nNumber) {
	return ((nNumber % 2) == 0);
}

template <typename T>
void DisplayContents(const T& input) {
	for (auto iElement = input.cbegin(); iElement != input.cend(); ++iElement) {
		cout << *iElement << ' ';
		cout << "| number of elements: " << input.size() << endl;
	}
}

int main() {
	vector<int> vecIntegers;
	for (int nNum = 0; nNum < 10; ++nNum) {
		vecIntegers.push_back(nNum);
	}
	cout << "The init contents:" << endl;
	DisplayContents(vecIntegers);

	vector<int> vecCopy(vecIntegers);

	cout << "The effect of using partition():" << endl;
	partition(vecIntegers.begin(), vecIntegers.end(), isEven);
	DisplayContents(vecIntegers);

	cout << "The effect of using stable_partition():" << endl;
	stable_partition(vecCopy.begin(), vecCopy.end(), isEven);
	DisplayContents(vecCopy);
	return 0;
}