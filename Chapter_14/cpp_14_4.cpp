#include <iostream>
using namespace std;

// 模版类(类的蓝图)
template <typename T1 = int, typename T2 = double>
class HoldsPair {
private:
	T1 value1;
	T2 value2;
public:
	HoldsPair(const T1& inputValue1, const T2& inputValue2) {
		value1 = inputValue1;
		value2 = inputValue2;
	}

	const T1& GetFirstValue() const {
		return value1;
	}

	const T2& GetSecondValue() const {
		return value2;
	}
};

int main() {
	// 模版类的声明
	HoldsPair<> mIntFloatPair(300, 10.09);
	HoldsPair<short, string> mShortStringPair(25, "Learn templates, love C++");

	cout << "The first object contains -" << endl;
	cout << "Value 1: " << mIntFloatPair.GetFirstValue() << endl;
	cout << "Value 2: " << mIntFloatPair.GetSecondValue() << endl;

	cout << "The second object contains -" << endl;
	cout << "Value 1: " << mShortStringPair.GetFirstValue() << endl;
	cout << "Value 2: " << mShortStringPair.GetSecondValue() << endl;
	return 0;
}