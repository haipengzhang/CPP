#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

// stringstream 当成一个设备能够进和出
int main() {
	cout << "Enter an integer: ";
	int input = 0;
	cin >> input;

	stringstream converterStream;
	converterStream << input;
	string strInput;
	converterStream >> strInput;
	
	cout << "Integer input = " << input << endl;
	cout << "String gained from integer, strInput = " << strInput << endl;
	
	stringstream anotherStream;
	anotherStream << strInput;
	int copy = 0;
	anotherStream >> copy;
	
	cout << "Integer gained from string, copy = " << copy << endl;
	
	return 0;
}