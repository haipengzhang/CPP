#include <algorithm>
#include <iostream>
#include <list>
#include <string>
using namespace std;

template <typename T>
void DisplayContents(const T& input) {
	for (auto iElement = input.cbegin(); iElement != input.cend(); ++iElement) {
		cout << *iElement << ' ';
		cout << "| number of elements: " << input.size() << endl;
	}
}

int main() {
	list<string> listNames;
	listNames.push_back("John Doe");
	listNames.push_back("Jack Nicholson");
	listNames.push_back("Sean Penn");
	listNames.push_back("Anna Hoover");

	cout << "The sorted contents of the list are: " << endl;
	listNames.sort();
	DisplayContents(listNames);

	cout << "The lowest index where Brad Pitt can be inserted is: ";
	auto iMinInsertPos = lower_bound(listNames.begin(), listNames.end(), "Brad Pitt");
	cout << distance(listNames.begin(), iMinInsertPos) << endl;

	cout << "The highest index where Brad Pitt can be inserted is: ";
	auto iMaxInsertPos = upper_bound(listNames.begin(), listNames.end(), "Brad Pitt");
	cout << distance(listNames.begin(), iMaxInsertPos) << endl;

	cout << endl;
	cout << "List after inserting Brad Pitt in sorted order: " << endl;
	listNames.insert(iMinInsertPos, "Brad Pitt");
	DisplayContents(listNames);

	return 0;
}