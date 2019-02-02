#include <iostream>
#include <string>
using namespace std;

// 函数运算符operator()
class CDisplay {
public:
	void operator() (string input) const {
		cout << input << endl;
	}
};

int main() {
	CDisplay mDisplayFuncObject;

	// 和mDisplayFuncObject.operator()一个意思
	// 可以称mDisplayFuncObject为函数对象或者functor
	mDisplayFuncObject("Display this string");

	return 0;
}