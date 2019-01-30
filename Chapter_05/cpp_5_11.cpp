#include <iostream>
using namespace std;

int main()
{
	// sizeof() 看着像函数，但实际上是运算符
	cout << "Use sizeof of determine memory occupied by arrays" << endl;
	int myNumbers[100] = {0};

	cout << "Bytes occupied by an int: " << sizeof(int) << endl;
	cout << "Bytes occupied by array myNumbers: " << sizeof(myNumbers) << endl;
	cout << "Bytes occupied by each element: " << sizeof(myNumbers[0]) << endl;

	return 0;
}