#include <unordered_set>
#include <iostream>
using namespace std;

// 散列集合实现unordered_set和unordered_multiset
template <typename T>
void DisplayContents(const T& input) {
	
	cout << "Number of elements.size() = " << input.size() << endl;
	cout << "Max bucket count = " << input.max_bucket_count() << endl;
	cout << "Load factor: " << input.load_factor() << endl;
	cout << "Max load factor = " << input.max_load_factor() << endl;
	cout << "unordered_set contains:";
	for (auto iElement = input.cbegin(); iElement != input.cend(); ++iElement) {
		cout << *iElement << ' ';
	}
	cout << endl;
}

int main() {
	unordered_set<int> usetInt;

	usetInt.insert(1000);
	usetInt.insert(-3);
	usetInt.insert(2011);
	usetInt.insert(300);
	usetInt.insert(-1000);
	usetInt.insert(989);
	usetInt.insert(-300);
	usetInt.insert(111);
	usetInt.insert(usetInt);
	usetInt.insert(999);
	usetInt.insert(usetInt);
	DisplayContents(usetInt);

	cout << "Enter int you want to check for existence in set: ";
	int key = 0;
	cin >> key;
	auto iPairThousand = usetInt.find(key);

	if (iPairThousand != usetInt.end()) {
		cout << *iPairThousand << " found in set" << endl;
	} else {
		cout << key << " not avaliable in set" << endl;
	}
	return 0;
}

