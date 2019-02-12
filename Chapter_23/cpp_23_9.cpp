#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void DisplayContents(const T& input) {
	for (auto iElement = input.cbegin(); iElement != input.cend(); ++iElement) {
		cout << *iElement << ' ';
		cout << "| number of elements: " << input.size() << endl;
	}
}

int main() {
	vector<int> vecIntegers(6);

	fill(vecIntegers.begin(), vecIntegers.begin() + 3, 8);
	fill_n(vecIntegers.begin() + 3, 3, 5);

	random_shuffle(vecIntegers.begin(), vecIntegers.end());

	cout << "The initial contents of the vector are: " << endl;
	DisplayContents(vecIntegers);

	cout << endl << "Using 'std::replace' to replace value 5 by 8" << endl;
	replace(vecIntegers.begin(), vecIntegers.end(), 5, 8);

	cout << "Using 'std::replace_if' to replace even values by -1" << endl;
	replace_if(vecIntegers.begin(), vecIntegers.end(), [](int element) {
		return ((element % 2) == 0);
	}, -1);
	cout << endl << "contents of the vector after replacements:" << endl;
	DisplayContents(vecIntegers);

	return 0;
}