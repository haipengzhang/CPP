#include <iostream>
#include <sstream>
#include <string>
using namespace std;

// 转换运算符
class Date {
private:
	int Day;
	int Month;
	int Year;

	string DateInString;
public:
	Date(int inputDay, int inputMonth, int inputYear) : Day(inputDay), Month(inputMonth), Year(inputYear) {}

	operator const char*() {
		ostringstream formattedDate;
		formattedDate << Day << " / " << Month << " / " << Year;

		DateInString = formattedDate.str();
		return DateInString.c_str();
	}

// 两个类型转换不能同时存在，这样编译器不知道用哪一个
	// operator const double() {
	// 	return 11.1;
	// }
};

int main() {
	Date holiday(25, 12, 2011);
	
	// 编译器执行到cout这一句，会自动将holiday中合适的运算符的值提供给cout
	cout << "holiday is on: " << holiday << endl;
	return 0;
}
