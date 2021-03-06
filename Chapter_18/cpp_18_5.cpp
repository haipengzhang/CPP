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

	listIntegers.push_front(4);
	listIntegers.push_front(3);
	listIntegers.push_front(2);
	listIntegers.push_front(1);
	listIntegers.push_front(0);
	listIntegers.push_back(5);

	DisplayContents(listIntegers);

	listIntegers.reverse();

	DisplayContents(listIntegers);
	
	return 0;
}