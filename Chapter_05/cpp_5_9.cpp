#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a number: ";
	int input = 0;
	cin >> input;

	int half = input >> 1;
	int quarter = input >> 2;
	int double_ = input << 1;
	int quadruple = input << 2;

	cout << "half: " << half << endl;
	cout << "quarter: " << quarter << endl;
	cout << "double: " << double_ << endl;
	cout << "quadruple: " << quadruple << endl;

	return 0;
}