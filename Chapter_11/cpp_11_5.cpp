#include <iostream>
using namespace std;

// 虚函数表的证明
// 虚函数表 用来实现多态的关键
class SimpleClass {
	int a, b;
public:
	void FuncDoSomething() {}
};

class Base {
	int a, b;
public:
	virtual void FuncDoSomething() {}
};

int main() {
	cout << "sizeof(SimpleClass) = " << sizeof(SimpleClass) << endl;
	cout << "sizeof(Base) = " << sizeof(Base) << endl;
	// Base 比 SimpleClass打一个指针的空间 也就是4个字节(64位机器就是8)，这个空间存放的是虚函数表
	return 0;
}