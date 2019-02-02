#include <iostream>
using namespace std;

class Date {
private:
	int Day, Month, Year;
	string DateInString;
public:
	Date(int inputDay, int inputMonth, int inputYear) : Day(inputDay), Month(inputMonth), Year(inputYear) {}
	
	void DisplayDate() {
		cout << Day << " / " << Month << " / " << Year << endl;
	}

	operator int () {
		return Year * 365 + Month * 7 + Day;
	}
};

class DynIntegers {
private:
	int* bufferIntegers;
public:
	// 移动构造函数
	DynIntegers(DynIntegers&& moveDynIntegers) {
		if (moveDynIntegers.bufferIntegers != NULL) {
			bufferIntegers = moveDynIntegers.bufferIntegers;
			moveDynIntegers.bufferIntegers = NULL;	//清空指针
		}
	}

	// 移动赋值运算符 &&指针的引用
	DynIntegers& operator=(DynIntegers&& moveDynIntegers) {
		if (moveDynIntegers.bufferIntegers != NULL && this != &moveDynIntegers) {
			delete bufferIntegers;
			bufferIntegers = moveDynIntegers.bufferIntegers;
			moveSource.buffer = NULL;	//清空指针
		}
		return *this;
	}

	~DynIntegers() {
		delete[] bufferIntegers;
	}
}