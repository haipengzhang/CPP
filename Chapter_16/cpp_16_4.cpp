#include <string>
#include <iostream>

// 字符串迭代器算法
int main() {
	using namespace std;

	string strSample("Good day String! Today is beautiful!");
	cout << "The sample string is: " << endl;
	cout << strSample << endl << endl;

	size_t charPos = strSample.find("day", 0);

	// check if the substring was found...
	if (charPos != string::npos) {
		cout << "First instance of \"day\" was found at position " << charPos;
	} else {
		cout << "Substring not found." << endl;
	}

	cout << endl << endl;

	cout << "Locating all instances of substring \"day\"" << endl;
	size_t subStringPos = strSample.find("day", 0);

	while (subStringPos != string::npos) {
		cout << "\"day\" found at position " << subStringPos << endl;
		size_t nSearchPosition = subStringPos + 1;
		subStringPos = strSample.find("day", nSearchPosition);
	}
	cout << endl;

	cout << "Locating all instances of character 'a'" << endl;
	const char charToSearch = 'a';
	charPos = strSample.find(charToSearch, 0);
	while (charPos != string::npos) {
		cout << "'" << charToSearch << "' found";
		cout << " at position: " << charPos << endl;
		size_t charSearchPos = charPos + 1;
		charPos = strSample.find(charToSearch, charSearchPos);
	}

	return 0;
}