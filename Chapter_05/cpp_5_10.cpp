#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a number: ";
	int input = 0;
	cin >> input;

	input += 8;
	cout << "After += 8, value = : " << input << endl;

	input -= 8;
	cout << "After -= 8, value = : " << input << endl;

	input /= 4;
	cout << "After /= 4, value = : " << input << endl;

	input *= 4;
	cout << "After *= 4, value = : " << input << endl;

	input %= 1000;
	cout << "After %= 1000, value = : " << input << endl;

	cout << "After <<= 1, value = " << (input <<= 1) << endl;
	cout << "After >>= 2, value = " << (input >>= 2) << endl;

	cout << "After |= 0x55, value = " << (input |= 0x55) << endl;
	cout << "After ^= 0x55, value = " << (input ^= 0x55) << endl;
	cout << "After &= 0x55, value = " << (input &= 0x55) << endl;

	return 0;
}