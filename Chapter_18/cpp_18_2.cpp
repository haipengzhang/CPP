#include <list>
#include <iostream>
using namespace std;

template <typename T>
void DispalyContents(const T& input) {
	for (auto iElement = input.cbegin(); iElement != input.cend(); ++iElement) {
		cout << *iElement << ' ';
	}
	cout << endl;
}

int main() {
	std::list<int> listIntegers;
	listIntegers.push_front(10);
	listIntegers.push_front(2011);
	listIntegers.push_back(-1);
	listIntegers.push_back(9999);

	DispalyContents(listIntegers);
	
	return 0;
}