#include <iostream>
using namespace std;

class MyString {
private:
	char* buffer;
public:
	MyString(const char* initialInput) {
		cout << "Constructor: creating new MyString" << endl;
		if (initialInput != NULL) {
			buffer = new char[strlen(initialInput) + 1];
			strcpy(buffer, initialInput);

			cout << "Buffer points to: 0x" << (unsigned int*)buffer << endl;
		} else {
			buffer = NULL;
		}
	}

	// copy constructor 当对象被复制或者按值传递给函数的时候都会被调用
	MyString(const MyString& copySource) {
		cout << "Copy constructor: copying from MyString" << endl;
		if (copySource.buffer != NULL) {
			// ensure deep copy by first allocating own buffer
			buffer = new char[strlen(copySource.buffer) + 1];
			strcpy(buffer, copySource.buffer);

			cout << "Buffer points to: 0x" << (unsigned int*)buffer << endl;
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

void UseMyString(MyString input) {
	cout << "String buffer in MyString is " << input.GetLength();
	cout << " Characters long" << endl;

	cout << "buffer contains: " << input.GetString() << endl;
	return;
}

int main() {
	// c++对象初始化返回的并不是指针
	MyString sayHello("Hello from String class");
	UseMyString(sayHello);
	return 0;
}