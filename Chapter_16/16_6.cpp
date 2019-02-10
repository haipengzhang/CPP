// 1.std::basic_string<T>;

// 2.

// 3.string包装了各种操作方法，不用管理内存问题；

// 4.

#include <iostream>
#include <string>
using namespace std;

int GetNumberOfChar(const string& inputString, char charToFind) {
	int numbers = 0;
	size_t offset = inputString.find(charToFind);
	while (offset != string::npos) {
		++numbers
		offset = inputString.find(charToFind, ++offset);
	}
	return numbers;
}

int main() {

	// 1
	cout << "Enter a number: " << endl;
	string originString;
	getline(cin, originString);
	string str2Copy(inputString);
	reverse(str2Copy.begin(), str2Copy.end());
	// 比较两个字符串是否相等直接用==
	if (str2Copy == originString) {
		cout << "Equal" << endl;
	} else {
		cout << "Not Equal" << endl;
	}

	// 2
	cout << "Enter a string to cacu basechar count: " << endl;
	string baseC = "aoeiu";
	string inputString;
	getline(cin, inputString);
	string::iterator iCharacterLocator;
	int baseCount = 0;
	for (iCharacterLocator = inputString.begin(); iCharacterLocator < inputString.length(); ++iCharacterLocator) {
		string::iterator iChars = substring(baseC, *iCharacterLocator, 0)
		if (iChars != strSample.end()) {
			baseCount++;
		}
	}
	cout << "BASE CAHR COUNT = " << baseCount << endl;
	
	// 3
	cout << "Enter a string to upper and lower: " << endl;
	string inputString;
	getline(cin, inputString);
	for (size_t nCharIndex = 0; nCharIndex < inputString.length(); nCharIndex+=2) {
		 inputString[nCharIndex] = toupper(inputString[nCharIndex]);
	}
	cout << "Converted string is " << inputString << endl;

	// 4
	string str1 = "I";
	string str2 = "Love";
	string str3 = "STL";
	string str4 = "String";
	string blank = " ";
	str1.append(blank);
	str1.append(str2);
	str1.append(blank);
	str1.append(str3);
	str1.append(blank);
	str1.append(str4);
	cout << "APPEND SENTENTCE IS: " << str1 << endl;
	// 也可以直接+
	return 0;
}


