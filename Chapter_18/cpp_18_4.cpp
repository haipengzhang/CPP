#include <list>
#include <iostream>
using namespace std;

template <typename T>
void DisplayContents(const T& input) {
	for (auto iElement = input.cbegin(); iElement != input.cend(); ++iElement) {
		cout << *iElement << ' ';
	}
	cout << endl;
}

int main() {
	std::list<int> listIntegers;
	listIntegers.push_back(4);
	listIntegers.push_front(3);
	listIntegers.push_back(5);

	auto iValue2 = listIntegers.insert(listIntegers.begin(), 2);

	cout << "Initial contents of the list:" << endl;
	DisplayContents(listIntegers);

	listIntegers.erase(listIntegers.begin(), iValue2);
	cout << "Contents after erasing a range of elements:" << endl;
	DisplayContents(listIntegers);

	cout << "After erasing element '" << *iValue2 << "';" << endl;
	listIntegers.erase(iValue2);
	DisplayContents(listIntegers);

	listIntegers.erase(listIntegers.begin(), listIntegers.end());
	cout << "Number of elements after erasing range: ";
	cout << listIntegers.size() << endl;

	return 0;
}