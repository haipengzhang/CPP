#include <iostream>
using namespace std;

int main()
{
	int age = 30;
	int *pInteger = &age;

	cout << "pInteger point to age now" << endl;
	cout << "pInteger = " << hex << pInteger << endl;

	int dogAge = 9;
	pInteger = &dogAge;

	cout << "pInteger point to dogAge now" << endl;
	cout << "pInteger = " << hex << pInteger << endl;

	return 0;
}