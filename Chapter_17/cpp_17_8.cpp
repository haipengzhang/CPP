#include <deque>
#include <iostream>
#include <algorithm>

int main() {
	using namespace std;

	deque<int> dqIntegers;

	// insert integers at the bottom of the array
	dqIntegers.push_back(3);
	dqIntegers.push_back(4);
	dqIntegers.push_back(5);

	dqIntegers.push_front(2);
	dqIntegers.push_front(1);
	dqIntegers.push_front(0);

	cout << "The contents of the deque after inserting elements ";
	cout << "at the top and bottom are:" << endl;

	for (size_t index = 0; index < dqIntegers.size(); ++index) {
		cout << "Element[" << index << "] = ";
		cout << dqIntegers[index] << endl;
	}
	cout << endl;

	dqIntegers.pop_front();
	dqIntegers.pop_back();

	cout << "The contents of the deque after erasing elements ";
	cout << "from the top and bottom are:" << endl;

	for (auto iElement = dqIntegers.begin(); iElement != dqIntegers.end(); ++iElement) {
		size_t offset = distance(dqIntegers.begin(), iElement);
		cout << "Element[" << offset << "] = ";
		cout << *iElement << endl;
	}

	return 0;
}