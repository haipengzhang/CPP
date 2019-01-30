#include <iostream>
#include <vector>	//动态数组类

using namespace std;

int main()
{
	// 注意声明的时候小括号
	vector<int> dynArrayNums(3);
	dynArrayNums[0] = -1002;
	dynArrayNums[1] = 23;
	dynArrayNums[2] = 55;

	cout << "Number of integers in array: " << dynArrayNums.size() << endl;
	cout << "Enter another number for the array" << endl;
	int anotherNum = 0;
	cin >> anotherNum;
	dynArrayNums.push_back(anotherNum);

	cout << "Number of integers in array: " << dynArrayNums.size() << endl;
	cout << "Last element in array: ";
	cout << dynArrayNums[dynArrayNums.size() - 1] << endl;

	return 0;
}