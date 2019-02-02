#include <iostream>
using namespace std;

template <typename T>
class TestStatic {
public:
	static int staticValue;
};

// static member initialization
template<typename T> int TestStatic<T>::staticValue;

int main() {
	TestStatic<int> int_Year;
	cout << "Setting static value for int_Year to 2011" << endl;
	int_Year.staticValue = 2011;
	TestStatic<int> int_2;

	TestStatic<double> double_1;
	TestStatic<double> double_2;
	cout << "Setting static value for double_2 to 2011" << endl;
	double_2.staticValue = 1011;

	cout << "Int_2.staticValue = " << int_2.staticValue << endl;
	cout << "double_1.staticValue = " << double_1.staticValue << endl;

	return 0;
}