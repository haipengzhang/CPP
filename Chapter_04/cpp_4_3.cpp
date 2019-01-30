#include <iostream>
using namespace std;

// 多维数组
int main()
{
	int myMultiArray[3][3] = {{11, 12, 13}, {21, 22, 23}, {31, 32, 33}};

	cout << "Row 0: " << myMultiArray[0][0] << " " \
					  << myMultiArray[0][1] << " " \
					  << myMultiArray[0][2] << " " << endl;

	cout << "Row 1: " << myMultiArray[1][0] << " " \
					  << myMultiArray[1][1] << " " \
					  << myMultiArray[1][2] << " " << endl;

	cout << "Row 2: " << myMultiArray[1][0] << " " \
					  << myMultiArray[1][1] << " " \
					  << myMultiArray[1][2] << " " << endl;

	return 0;

}