#include <string>
#include <algorithm>
#include <iostream>

// 字符串迭代器算法
int main() {
	using namespace std;

	string strSample("Hello String! Wake up to a beautiful day!");
	cout << strSample << endl << endl;

	cout << "Truncating the second sentence: " << endl;
	strSample.erase(13, 28);
	cout << strSample << endl << endl;

	string::iterator iChars = find(strSample.begin(), strSample.end(), 'S');

	cout << "Erasing character 'S' from the sample string:" << endl;
	if (iChars != strSample.end()) {
		// 删除第一个
		strSample.erase(iChars);
	}
	cout << strSample << endl << endl;

	cout << "Erasing a range between begin() and end(): " << endl;
	strSample.erase(strSample.begin(), strSample.end());

	if (strSample.length() == 0) {
		cout << "The string is empty" << endl;
	}
}