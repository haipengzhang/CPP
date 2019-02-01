#include <iostream>
using namespace std;

class MyString {
	char *buffer;

	MyString() : buffer(NULL) {
		cout << "Default constructor called" << endl;
	}
public:
	~MyString() {
		if (buffer != NULL) {
			delete[] buffer;
		}
	}

	int GetLength() {
		return strlen(buffer);
	}
	
	operator const char*() {
		return buffer;
	}

	MyString operator+ (const MyString& addThis) {
		cout << "operator+ called: " << endl;
		MyString newString;
		if (addThis.buffer != NULL) {
			newString.buffer = new char[GetLength() + strlen(addThis.buffer) + 1];
			strcpy(newString.buffer, buffer);
			strcat(newString.buffer, addThis.buffer);
			return newString;
		} else {
			return *this;
		}
	}
	// constructor
	MyString(const char* initialInput) {
		cout << "constructor called for: " << initialInput << endl;
		if (initialInput != NULL) {
			buffer = new char[strlen(initialInput) + 1];
			strcpy(buffer, initialInput);
		} else {
			buffer = NULL;
		}
	}

	// copy constructor
	// 1.通过该对象初始化的时候调用；2.临时变量赋值的时候调用；
	MyString(const MyString& copySource) {
		cout << "copy constructor called for: " << copySource.buffer << endl;
		if (copySource.buffer != NULL) {
			buffer = new char[strlen(copySource.buffer) + 1];
			strcpy(buffer, copySource.buffer);
		} else {
			buffer = NULL;
		}
	}

	// copy assigment operator
	// 1.赋值给变量的时候调用，注意不是临时变量
	MyString& operator= (const MyString& copySource) {
		cout << "copy assigment called for: " << copySource.buffer << endl;
		if ((this != &copySource) && (copySource.buffer != NULL)) {
			if (buffer != NULL) {
				delete[] buffer;
			}
			buffer = new char[strlen(copySource.buffer) + 1];
			strcpy(buffer, copySource.buffer);
		}
		return *this;
	}

	// 他们分别是构造函数和赋值元算符的重载版本
	// 在需要创建临时右值时，c++将使用移动构造函数和移动赋值运算符
	// move constructor
	MyString(MyString&& moveSource) {
		cout << "Move constructor to move from: " << moveSource.buffer << endl;
		if (moveSource.buffer != NULL) {
			buffer= moveSource.buffer;
			moveSource.buffer = NULL;
		}
	}
	
	// move assignment operator
	MyString& operator= (MyString&& moveSource) {
		cout << "Move assignment to move from: " << moveSource.buffer << endl;
		if (moveSource.buffer != NULL && this != &moveSource) {
			delete buffer;
			buffer = moveSource.buffer;
			moveSource.buffer = NULL;
		}
		return *this;
	}
};

int main() {
	MyString hello("Hello ");
	MyString world("World");
	MyString cpp(" of c++");

	MyString sayHelloAgain("overwrite this");
	sayHelloAgain = hello + world + cpp;
	return 0;
}








