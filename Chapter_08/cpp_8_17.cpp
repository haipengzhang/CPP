#include <iostream>
using namespace std;

int main()
{
	// 引用只是别名，地址和地址内容都是一样的
	int origin = 30;
	cout << "Original is " << origin << endl;
	cout << "Original address is " << &origin << endl;

	int& ref = origin;
	cout << "Ref address is " << &ref << endl;

	int& ref2 = ref;
	cout << "Ref2 address is " << &ref2 << endl;

	return 0;
}