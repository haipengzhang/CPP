#include <iostream>
using namespace std;

int main()
{
	int dogAge = 9;
	cout << "Initialized dogsAge = " << dogAge << endl;

	int *pAge = &dogAge;
	cout << "pAge points to dogAge = " << pAge << endl;

	cout << "Enter an age for your dog: ";
	cin >> *pAge;

	cout << "input stored using pAge at " << hex << pAge << endl;
	cout << "integer dogsAge = " << dec << dogAge << endl;
	
	return 0;
}