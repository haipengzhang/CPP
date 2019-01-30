#include <iostream>
using namespace std;

// 将const作用于引用，可以禁止修改引用指向变量的值，让函数参数只读（防止其修改栈中的数据）
void caculateSqure(const int& number, int &result)
{
	result = number * number;
}

int main()
{
	cout << "Enter a number you wish to squre : ";
	int number = 0;
	cin >> number;

	int squre = 0;
	caculateSqure(number, squre);
	cout << number << "^2 = " << squre << endl;
	return 0;
}