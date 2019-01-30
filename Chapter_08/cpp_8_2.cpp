#include <iostream>
using namespace std;

int main()
{
	int age = 30;
	int *pInteger = &age;

	cout << "Integer age is at: " << hex << pInteger << endl;

	return 0;
}