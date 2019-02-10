#include <map>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

template <typename T>
void DisplayContents(const T& input) {
	for (auto iElement = input.cbegin();
		iElement != input.cend();
		++iElement) {
		cout << iElement->first << " -> " << iElement->second << endl;
	}
	cout << endl;
}

struct PreIgnoreCase {
	bool operator()(const string& str1, const string& str2) const {
		string str1NoCase(str1), str2NoCase(str2);
		std::transform(str1.begin(), str1.end(), str1NoCase.begin(), ::tolower);
		std::transform(str2.begin(), str2.end(), str2NoCase.begin(), ::tolower);
		
		return (str1NoCase < str2NoCase);
	};
};

typedef map<string, string> DIRECTORY_WITHCASE;
typedef map<string, string, PreIgnoreCase> DIRECTORY_NOCASE;

int main() {
	DIRECTORY_NOCASE dirCaseInsensitive;
	dirCaseInsensitive.insert(make_pair("John", "234564"));
	dirCaseInsensitive.insert(make_pair("JOHN", "234564"));
	dirCaseInsensitive.insert(make_pair("Sara", "42367236"));
	dirCaseInsensitive.insert(make_pair("Jack", "324353478"));

	cout << "Displaying contents of the case-insensitive map:" << endl;
	DisplayContents(dirCaseInsensitive);

	DIRECTORY_WITHCASE dirCaseSensitive(dirCaseInsensitive.begin(), dirCaseInsensitive.end());
	cout << "Displaying contents of the case-sensitive map:" << endl;
	DisplayContents(dirCaseInsensitive);

	cout << "Please enter a name to search: " << endl << "> ";
	string strNameInput;
	cin >> strNameInput;

	// find in the map...
	auto iPairInNoCaseDir = dirCaseInsensitive.find(strNameInput);
	if (iPairInNoCaseDir != dirCaseInsensitive.end()) {
		cout << iPairInNoCaseDir->first << "'s number in the case-insensitive";
		cout << " directory is: " << iPairInNoCaseDir->second << endl;
	} else {
		cout << strNameInput << "'s number not found ";
		cout << "in the case-insensitive directory" << endl;
	}

	// find in the case-sensitive map...
	auto iPairInNoCaseSensDir = dirCaseSensitive.find(strNameInput);
	if (iPairInNoCaseSensDir != dirCaseSensitive.end()) {
		cout << iPairInNoCaseSensDir->first << "'s number in the case-insensitive";
		cout << " directory is: " << iPairInNoCaseSensDir->second << endl;
	} else {
		cout << strNameInput << "'s number not found ";
		cout << "in the case-sensitive directory" << endl;
	}

	return 0;
} 
