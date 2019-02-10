#include <map>
#include <iostream>
#include <string>
using namespace std;

template <typename T>
void DisplayContents(const T& input) {
	for (auto iElement = input.cbegin(); iElement != input.cend(); ++iElement) {
		cout << iElement->first << " -> " << iElement->second << ' ';
	}
	cout << endl;
}

int main() {
	map<int, string> mapIntToString;
	mapIntToString.insert(make_pair(3, "Three"));
	mapIntToString.insert(make_pair(45, "Forty Five"));
	mapIntToString.insert(make_pair(-1, "Minus One"));
	mapIntToString.insert(make_pair(1000, "Thousand"));

	cout << "The multimap contains " << mapIntToString.size();
	cout << " key-value pairs. They are: " << endl;

	DisplayContents(mapIntToString);

	cout << "Enter the key you wish to find: ";
	int key = 0;
	cin >> key;

	auto iPairFound = mapIntToString.find(key);
	if (iPairFound != mapIntToString.end()) {
		cout << "Key " << iPairFound->first << " point to value: ";
		cout << iPairFound->second << endl;
	} else {
		cout << "Sorry, pair with key " << key << " not in map" << endl;
	}
	return 0;

}