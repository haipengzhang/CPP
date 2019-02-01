#include <iostream>
using namespace std;

// 单目递增与单目递减运算符
class Date {
private:
	int Day;
	int Month;
	int Year;
public:
	Date(int inputDay, int inputMonth, int inputYear) : Day(inputDay), Month(inputMonth), Year(inputYear) {}

	// 返回的是引用,其实也可以写成Date* return this或者Date return *this;
	// 返回的是引用,据说好处是编译器能检查你返回的不是局部变量
	Date& operator ++() {
		++Day;
		return *this;
	}

	Date& operator --() {
		--Day;
		return *this;
	}

	void DisplayDate() {
		cout << Day << " / " << Month << " / " << Year << endl;
	}

};

int main() {
	Date holiday(25, 12, 2011);
	cout << "The date object is initialized to: ";
	holiday.DisplayDate();

	++holiday;
	cout << "The date object is prefix-increment is: ";
	holiday.DisplayDate();

	--holiday;
	--holiday;
	cout << "The date object is prefix-decrement is: ";
	holiday.DisplayDate();

	return 0;
}