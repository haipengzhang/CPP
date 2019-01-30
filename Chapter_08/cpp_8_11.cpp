#include <iostream>
using namespace std;

int main()
{
	int myNumber[5];	//堆分配了5个int的空间
	int *pNumbers = myNumber; 	// 不用&取址符，数组初始化返回的就是第一个元素地址
	cout << "pNumbers is " << pNumbers << endl;
	cout << "myNumber[0] address is " << &myNumber[0] << endl;
}