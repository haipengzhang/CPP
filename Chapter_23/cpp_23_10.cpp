#include <algorithm>
#include <iostream>
#include <vector>
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
	vector<string> vecNames;
	vecNames.push_back("John Doe");
	vecNames.push_back("Jack Nicholson");
	vecNames.push_back("Sean Penn");
	vecNames.push_back("Anna Hoover");

	vecNames.push_back("Jack Nicholson");

	cout << "The init contents of the vector are:" << endl;
	DisplayContents(vecNames);

	cout << "The sorted vector contains names in the order:" << endl;
	sort(vecNames.begin(), vecNames.end());
	DisplayContents(vecNames);

	cout << "Searching for \"John Doe\" using 'binary_search':" << endl;
	bool bElementFound = binary_search(vecNames.begin(), vecNames.end(), "John Doe");
	if (bElementFound) {
		cout << "\"John Doe\" was found in the vector!" << endl;
	} else {
		cout << "element not found" << endl;
	}

	auto iNewEnd = unique(vecNames.begin(), vecNames.end());
	vecNames.erase(iNewEnd, vecNames.end());

	cout << "The contents of the vector after using 'unique':" << endl;
	DisplayContents(vecNames);

	return 0;
}
