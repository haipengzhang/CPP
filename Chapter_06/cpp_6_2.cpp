#include <iostream>
#include <string>
using namespace std;

int main()
{
	char buffer[20] = {'\0'};

	string enterLine;
	getline(cin, enterLine);

	if (enterLine.length() < 20) {
		strcpy(buffer, enterLine.c_str());
		cout << "Buffer contains: " << buffer << endl;
	}
	return 0;
}