#include <map>
#include <iostream>
#include <string>

using namespace std;

typedef map<int, string> MAP_INT_STRING;
typedef multimap<int, string> MMAP_INT_STRING;

template <typename T>
void DisplayContents(const T& input) {
	for (auto iElement = input.cbegin(); iElement != input.cend(); ++iElement) {
		cout << iElement->first << " -> " << iElement->second << ' ';
	}
	cout << endl;
}

int main() {
	MAP_INT_STRING mapIntToString;

	mapIntToString.insert(MAP_INT_STRING::value_type(3, "Three"));
	mapIntToString.insert(make_pair(-1, "Nimus One"));

	mapIntToString.insert(pair<int, string>(1000, "One Thousand"));

	mapIntToString[1000000] = "One Million";

	cout << "The map contains " << mapIntToString.size();
	cout << " key-value pairs. They are: " << endl;
	DisplayContents(mapIntToString);


	MMAP_INT_STRING mmapIntToString(mapIntToString.cbegin(), mapIntToString.cend());
	mmapIntToString.insert(make_pair(1000, "Thousand"));

	cout << endl << "The multimap contains " << mmapIntToString.size();
	cout << " key-value pairs. They are: " << endl;
	cout << "The elements int the multimap are: " << endl;
	DisplayContents(mapIntToString);

	// The multimap can also return the number of pairs with the same key
	cout << "The number of pairs in the multimap with 1000 as their key: " << mmapIntToString.count(1000) << endl;

}