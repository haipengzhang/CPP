#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter your name: ";
	string name;

	// 也可以用getline(cin, name);
	cin >> name;
	
	int charsToAlloc = name.length() + 1;
	char *copyOfName = new char[charsToAlloc];
	strcpy(copyOfName, name.c_str());
	cout << "Dynamically allocated buffer contains: " << copyOfName << endl;
	delete[] copyOfName;
	return 0;
}