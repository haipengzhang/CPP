#include <iostream>
using namespace std;

class MyString {
private:
	char* buffer;
public:
	MyString(const char* initialInput) {
		if (initialInput != NULL) {
			buffer = new char[strlen(initialInput) + 1];
			strcpy(buffer, initialInput);
		} else {
			buffer = NULL;
		}
	}
	~MyString() {
		cout << "Invoking destructor, clearing up" << endl;
		if (buffer != NULL) {
			delete[] buffer;
		}
	}
	int GetLength() {
		return strlen(buffer);
	}
	const char* GetString() {
		return buffer;
	}
};

// 浅拷贝，形参和变量指向同一份内存地址
void UseMyString(MyString input) {
	cout << "String buffer in MyString is " << input.GetLength();
	cout << " Characters long" << endl;

	cout << "buffer contains: " << input.GetString() << endl;
	return;
}

int main() {
	MyString sayHello("Hello from String class");
	UseMyString(sayHello);
	// 这里会崩溃，sayHello对象copy到UseMyString形参，UseMyString返回时调用sayHello对象析构函数
	
	return 0;
}