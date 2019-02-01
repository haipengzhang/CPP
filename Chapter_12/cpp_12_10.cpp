#include <iostream>
using namespace std;

// 重载下标运算符
class MyString {
private:
	char* buffer;
	MyString() {};
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

	// 下标运算符
	// 第一个const限制了返回值 不能进行 [] = 的操作
	// 后面的const将运算符的函数类型设置成const，这将禁止该运算符修改类的成员属性
	const char& operator[](int index) const {
		// 如果后一个const不写可以在里面对buffer进行修改
		// buffer = NULL; member function 'MyString::operator[]' is declared const here
		// 里面调用的方法必须都是const的
		if (index < GetLength()) {
			return buffer[index];
		} else {
			return buffer[0];
		}
	}

	~MyString() {
		if (buffer != NULL) {
				delete[] buffer;
			}
	}

	int GetLength() const {
		return strlen(buffer);
	}

	// description
	operator const char*() {
		return buffer;
	}
};

int main() {
	cout << "Type a statement: ";
	string strInput;
	getline(cin, strInput);

	MyString youSaid(strInput.c_str());

	cout << "Using operator[] for displaying your input: " << endl;
	for (int index = 0; index < youSaid.GetLength(); ++index) {
		cout << youSaid[index] << " ";
	}
	cout << endl;

	cout << "Enter index 0 -" << youSaid.GetLength() - 1 << ": ";
	int inIndex = 0;
	cin >> inIndex;
	cout << "Input character at zero-based position: " << inIndex;
	cout << " is: " << youSaid[inIndex] << endl;

	// 因为返回值是 const的所以编译不通过
	// youSaid[0] = 'T';
	return 0;
}



