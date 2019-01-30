#include <iostream>
using namespace std;

int main()
{
	int age = 30;
	int dogAge = 9;

	cout << "Integer age = " << age << endl;
	cout << "Integer dogAge = " << dogAge << endl;

	int *pInteger = &age;
	cout << "pInteger point to age now" << endl;
	cout << "*pInteger = " << dec << *pInteger << endl;

	pInteger = &dogAge;
	cout << "pInteger point to dogAge now" << endl;
	cout << "*pInteger = " << dec << *pInteger << endl;
	
	return 0;
}