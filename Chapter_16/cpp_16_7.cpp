#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {

	cout << "Please enter a string for case-convertion:" << endl;
	cout << "> ";
	string strInput;
	getline(cin, strInput);
	cout << endl;

	transform(strInput.begin(), strInput.end(), strInput.begin(), ::toupper);
	cout << "The string converted to upper case is: " << endl;
	cout << strInput << endl << endl;
	
	transform(strInput.begin(), strInput.end(), strInput.begin(), ::tolower);
	cout << "The string converted to lower case is: " << endl;
	cout << strInput << endl << endl;

	return 0;
}