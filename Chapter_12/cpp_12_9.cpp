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

	// 复制构造函数
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

	MyString& operator=(const MyString& copySource) {
		if ((this != &copySource) && (copySource.buffer != NULL)) {
			if (buffer != NULL) {
				delete buffer;
			}
			buffer = new char[strlen(copySource.buffer) + 1];
			strcpy(buffer, copySource.buffer);
		}
		return *this;
	}

	~MyString() {
		if (buffer != NULL) {
				delete[] buffer;
			}
	}

	int GetLength() {
		return strlen(buffer);
	}

	// description
	operator const char*() {
		return buffer;
	}
};

int main() {
	MyString string1("Hello ");
	MyString string2(" World");

	cout << "Before assignment: " << endl;
	cout << string1 << string2 << endl;
	string2 = string1;
	cout << "After assignment string2 = string1: " << endl;
	cout << string1 << string2 << endl;

	return 0;
}
