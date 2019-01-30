#include <iostream>

int main(int argc, char const *argv[])
{
	using namespace std;

	const int arrayLength = 5;
	
	// 每个元素value都是22
	int myNumbers[arrayLength] = {22};
	int varIndex = 0;
	cout << "Enter index :";
	cin >> varIndex;

	cout << "with value :";
	cin >> myNumbers[varIndex]
	cout << endl;

	cout << "First Element is " << myNumbers[0] << endl;
	cout << "Second Element is " << myNumbers[1] << endl;
	cout << "Third Element is " << myNumbers[2] << endl;
	cout << "Fouth Element is " << myNumbers[3] << endl;
	cout << "Second Element is " << myNumbers[4] << endl;

	return 0;
}