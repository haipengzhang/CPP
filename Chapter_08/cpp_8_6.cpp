#include <iostream>
using namespace std;

int main()
{
	int age = 30;
	double Pi = 3.1416;

	int *pInt = &age;
	double *pDouble = &Pi;
	
	cout << "Size of fundamental types " << endl;
	cout << "sizeof(int) = " << sizeof(int) << endl;
	cout << "sizeof(double) = " << sizeof(double) << endl;
	cout << "sizeof(char) = " << sizeof(char) << endl;

	cout << "sizeof(pInt) = " << sizeof(pInt) << endl;
	cout << "sizeof(pDouble) = " << sizeof(pDouble) << endl;

	return 0;
}