#include <iostream>
using namespace std;

int main()
{
	int myInt = 101;
	cout << "Start value of integer being operated: " << myInt << endl;

	int postFixInc = myInt++;
	cout << "Result of postFix increment = " << postFixInc << endl;
	cout << "After postFix increment, myInt = " << myInt << endl;

	myInt = 101;
	int preFixInc = ++myInt;
	cout << "Result of preFix increment = " << preFixInc << endl;
	cout << "After preFix increment, myInt = " << myInt << endl;

	myInt = 101;
	int postFixDec = myInt--;
	cout << "Result of postFix decrement = " << postFixDec << endl;
	cout << "After postFix decrement, myInt = " << myInt << endl;

	myInt = 101;
	int preFixDec = --myInt;
	cout << "Result of preFix decrement = " << preFixDec << endl;
	cout << "After preFix decrement, myInt = " << myInt << endl;

	return 0;

}