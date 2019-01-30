#include <iostream>
using namespace std;

void returnSqure(int& number)
{
	number *= number;
}

int main()
{
	cout << "Enter a number you wish to squre : " << endl;
	int number;
	cin >> number;

	returnSqure(number);
	cout << "Squre is " << number << enld;
	return 0;
}