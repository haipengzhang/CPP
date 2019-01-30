#include <iostream>
#include <string>

using namespace std;

int main()
{
	string greetings("Hello std::string!");
	cout << greetings << endl;

	cout << "Enter a line of text:" << endl;
	string firstLine;
	getline(cin, firstLine);

	cout << "Enter another:" << endl;
	string secLine;
	getline(cin, secLine);

	cout << "Result of concatenated string:" << endl;
	string concat = firstLine + " " + secLine;
	cout << concat << endl;

	cout << "copy of concatenated string: " << endl;
	string copy;
	copy = concat;
	cout << copy << endl;
	
	cout << "Length of concat string: " << concat.length() << endl;
	
	return 0;
}