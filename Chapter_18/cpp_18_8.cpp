#include <forward_list>
#include <iostream>
using namespace std;

// forward_list只能对迭代器使用++
template <typename T>
void DisplayContents(const T& input) {
	for (auto iElement = input.cbegin(); iElement != input.cend(); ++iElement) {
		cout << *iElement << ' ';
	}
	cout << endl;
}

int main() {
	forward_list<int> flistIntegers;
	flistIntegers.push_front(0);
	flistIntegers.push_front(2);
	flistIntegers.push_front(2);
	flistIntegers.push_front(4);
	flistIntegers.push_front(3);
	flistIntegers.push_front(1);

	cout << "Contents of forward_list: " << endl;
	DisplayContents(flistIntegers);

	flistIntegers.remove(2);
	flistIntegers.sort();
	cout << "Contents after removing 2 and sorting: " << endl;
	DisplayContents(flistIntegers);

	return 0;
}