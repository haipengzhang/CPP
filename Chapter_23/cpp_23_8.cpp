#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <functional>
using namespace std;

template <typename T>
void DisplayContents(const T& input) {
	for (auto iElement = input.cbegin(); iElement != input.cend(); ++iElement) {
		cout << *iElement << ' ';
		cout << "| number of elements: " << input.size() << endl;
	}
}

int main() {
	list<int> listIntegers;
	for (int nCount = 0; nCount < 10; ++nCount) {
		listIntegers.push_back(nCount);
	}
	cout << "Source(list) contains:" << endl;
	DisplayContents(listIntegers);

	vector<int> vecIntegers(listIntegers.size() * 2);
	auto iLastPos = copy(listIntegers.begin(), listIntegers.end(), vecIntegers.begin());
	copy_if(listIntegers.begin(), listIntegers.end(), iLastPos, [](int element){
		return ((element % 2) == 1);
	});
	cout << "Destination(vector) after copy and copy_if:" << endl;
	DisplayContents(vecIntegers);

	auto iNewEnd = remove(vecIntegers.begin(), vecIntegers.end(), 0);
	vecIntegers.erase(iNewEnd, vecIntegers.end());
	iNewEnd = remove_if(vecIntegers.begin(), vecIntegers.end(), [](int element){
			return ((element % 2) == 1);
		});
	vecIntegers.erase(iNewEnd, vecIntegers.end()); //resizing

	cout << "Destination(vector) after remove, remove_if, erase:" << endl;
	DisplayContents(vecIntegers);

	return 0;
}