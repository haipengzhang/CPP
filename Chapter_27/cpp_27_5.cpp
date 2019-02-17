#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Enter a line: " << endl;
	char cStyleStr[10] = {0};
	cin.get(cStyleStr, 9);
	cout << "cStyleStr: " << cStyleStr << endl;
	
	return 0;
}