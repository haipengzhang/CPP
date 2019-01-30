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

class Human {
private:
	int age;
	bool gender;
	MyString name;
public:
	Human(const MyString& inputName, int inputAge, bool inputGender):
	 name(inputName), age(inputAge), gender(inputGender) {}

	 int GetAge() {
	 	return age;
	 }
};


int main() {
	MyString firstMan("Adam");
	MyString firstWoman("Eve");

	cout << "sizeof(MyString) = " << sizeof(MyString) << endl;
	cout << "sizeof(firstMan) = " << sizeof(firstMan) << endl;
	cout << "sizeof(firstWoman) = " << sizeof(firstWoman) << endl;

	Human firstMaleHuman(firstMan, 25, true);
	Human firstFemaleHuman(firstWoman, 18, false);

	cout << "sizeof(Human) = " << sizeof(Human) << endl;
	cout << "sizeof(firstMaleHuman) = " << sizeof(firstMaleHuman) << endl;
	cout << "sizeof(firstFemaleHuman) = " << sizeof(firstFemaleHuman) << endl;

	return 0;
}

























