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
	list<int> listIntegers1;
	listIntegers1.insert(listIntegers1.begin(), 2);
	listIntegers1.insert(listIntegers1.begin(), 1);

	listIntegers1.insert(listIntegers1.end(), 3);

	DisplayContents(listIntegers1);

	list<int> listIntegers2;
	// 插入4个0
	listIntegers2.insert(listIntegers2.begin(), 4, 0);

	cout << "The contents of list 2 after inserting '";
	cout << listIntegers2.size() << "' elements of a value:" << endl;
	DisplayContents(listIntegers2);

	list<int> listIntegers3;
	listIntegers3.insert(listIntegers3.begin(), listIntegers1.begin(), listIntegers1.end());

	cout << "The contents of list 3 after inserting the contents of ";
	cout << "list 1 at the beginning:" << endl;
	DisplayContents(listIntegers3);

	// Inserting elements from another list at the end...
	listIntegers3.insert(listIntegers3.end(), listIntegers2.begin(), listIntegers2.end());
	cout << "The contents of list 3 after inserting ";
	cout << "the contents of list 2 at the beginning:" << endl;
	DisplayContents(listIntegers3);

	return 0;
}