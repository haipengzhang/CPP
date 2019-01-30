#include <iostream>
using namespace std;

int main()
{
	cout << "Enter two integers:" << endl;
	int num1 = 0, num2 = 0;
	cin >> num1;
	cin >> num2;

	bool equality = (num1 == num2);
	cout << "Result of equality test: " << equality << endl;

	bool inEquality = (num1 != num2);
	cout << "Result of inEquality test: " << inEquality << endl;

	bool greaterThan = (num1 > num2);
	cout << "Result of " << num1 << " > " << num2 << " test: " << greaterThan << endl;

	bool lessThan = (num1 < num2);
	cout << "Result of " << num1 << " < " << num2 << " test: " << lessThan << endl;

	bool greaterThanEqual = (num1 >= num2);
	cout << "Result of " << num1 << " >= " << num2 << " test: " << greaterThanEqual << endl;
	
	bool lessThanEqual = (num1 <= num2);
	cout << "Result of " << num1 << " <= " << num2 << " test: " << lessThanEqual << endl;

	return 0;
}

