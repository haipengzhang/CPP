#include <iostream>
#include <memory>
using namespace std;

// 智能指针能够让变量用起来像普通指针一样，但是又不用做一些普通指针变量需要做的delete操作；
class Date {
private:
	int Day;
	int Month;
	int Year;

	string DateInString;

public:
	Date(int inputDay, int inputMonth, int inputYear) : Day(inputDay), Month(inputMonth), Year(inputYear) {}
	
	void DisplayDate() {
		cout << Day << " / " << Month << " / " << Year << endl;
	}
};

int main() {
	unique_ptr<int> pDynamicAllocInteger(new int);
	*pDynamicAllocInteger = 42;

	// use smart pointer type like an int*
	cout << "Integer value is: " << *pDynamicAllocInteger << endl;

	unique_ptr<Date> pHoliday(new Date(25, 11, 2011));
	cout << "The new instance of date contains: ";

	// use pHoliday just as you would a Date*
	pHoliday->DisplayDate();

	// no need to do the following when using unique_ptr:
	// delete pDynamicAllocInteger;
	// delete pHoliday;

	return 0;
}