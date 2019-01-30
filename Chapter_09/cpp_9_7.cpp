#include <iostream>
using namespace std;

class MyString {
private:
	char* buffer;
public:
	MyString(const char* inialInput) {
		if (inialInput != NULL) {
			buffer = new char[strlen(inialInput) + 1];
			stycpy(buffer, inialInput);
		} else {
			buffer = NULL;
		}
	}
	~MyString() {
		cout << "Invoke destructor, clearing up" << endl;
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

int main() {
	// c语言的字符串，其实就是字符数组，初始化之后会返回第一个元素的指针
	MyString sayHello("Hello from String Class");
	cout << "String buffer in MyString is " << sayHello.GetLength();
	cout << " Characters long" << endl;

	cout << "Buffer contains: ";
	cout << "Buffer contains: " << sayHello.GetString() << endl;

	return 0;
}
