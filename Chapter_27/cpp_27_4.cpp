#include <iostream>
using namespace std;

int main() {
	cout << "Enter an integer: ";
	int inputInt = 0;
	cin >> inputInt;

	cout << "Enter the value of Pi: ";
	double Pi = 0.0;
	cin >> Pi;

	cout << "Enter three chars seperated by space: " << endl;
	char char1 = '\0', char2 = '\0', char3 = '\0';
	// 一行代码接受三个输入 用space风格
	cin >> char1 >> char2 >> char3;
	cout << "The recorded variable values are: " << endl;
	cout << "Pi: " << Pi << endl;
	cout << "The three chars: " << char1 << char2 << char3 << endl;

	return 0;
}