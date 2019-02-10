#include <iostream>
#include <string>

// STL字符串遍历，使用[]或者string::const_iterator
int main() {
	using namespace std;

	string strSTLString("Hello String");

	cout << "Display the elements in the string using array-syntax: " << endl;
	for (size_t nCharCounter = 0; nCharCounter < strSTLString.length(); ++nCharCounter) {
		cout << "Charactor [" << strSTLString << "] is: ";
		cout << strSTLString[nCharCounter] << endl;
	}
	cout << endl;

	cout << "Display the contents of the string using iterators: " << endl;
	int charOffset = 0;
	string::const_iterator iCharacterLocator;
	for (iCharacterLocator = strSTLString.begin(); iCharacterLocator != strSTLString.end(); ++iCharacterLocator) {
		cout << "Charactor [" << charOffset++ << "] is: ";
		cout << *iCharacterLocator << endl;
	}
	cout << endl;

	cout << "The char* representation of the string is: ";
	cout << strSTLString.c_str() << endl;

	return 0;
}