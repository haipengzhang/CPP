#include <iostream>
using namespace std;

const double Pi = 3.1415926;

inline long doubleNum(int doubleNum)
{
	return doubleNum * 2;
}

int main()
{
	cout << "Enter an integer: ";
	int inputNum = 0;
	cin >> inputNum;

	cout << "Double : " << doubleNum(inputNum) << endl;
	return 0;
}