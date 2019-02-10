#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

template <typename T1, typename T2>
void DisplayUnorderedMap(unordered_map<T1, T2>& input) {
	cout << "Number of pairs, size(): " << input.size() << endl;
	cout << "Max bucket count = " << input.max_bucket_count() << endl;
	cout << "Load factor: " << input.load_factor() << endl;
	cout << "Max load factor = " << input.max_load_factor() << endl;
	cout << "Unordered Map contains: " << endl;

	for (auto iElement = input.begin(); iElement != input.cend(); ++iElement) {
		cout << iElement->first << " -> " << iElement->second << endl;
	}
}

int main() {
	unordered_map<int, string> umapIntToString;
	unordered_map.insert(make_pair(1, "One"));
	unordered_map.insert(make_pair(45, "Forty Five"));
	unordered_map.insert(make_pair(1001, "Thousand One"));
	unordered_map.insert(make_pair(-2, "Minus Two"));
	unordered_map.insert(make_pair(-1000, "Minus One Thousand"));
	unordered_map.insert(make_pair(100, "One Hundred"));
	unordered_map.insert(make_pair(12, "Twelve"));
	unordered_map.insert(make_pair(-100, "Minus One Hundred"));

	DisplayUnorderedMap<int, string>(unordered_map);

	cout << "Inserting one more element" << endl;
	unordered_map.insert(make_pair(300, "Three Hundred"));
	DisplayUnorderedMap<int, string>(unordered_map);


	cout << "Enter key to find for: ";
	int key = 0;
	cin >> key;
	auto iElementFound = umapIntToString.find(key);
	if (iElementFound != umapIntToString.end()) {
		cout << "Found! Key " << iElementFound->first << " points to value ";
		cout << iElementFound->second << endl;
	} else {
		cout << "Key has no correcsponding value in unordered map!" << endl;
	}
	return 0;
}