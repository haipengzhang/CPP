#include <iostream>
using namespace std;

int main()
{
	auto flag = true;
	auto number = 250000000000;

	cout << "flag = " << flag;
	cout << ", sizeof(flag) = " << sizeof(flag) << endl;
	cout << "number = " << number;
	cout << ", sizeof(number) = " << sizeof(number) << endl;

	return 0;
}