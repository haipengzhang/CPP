#include <iostream>
#include <string>
using namespace std;

// 模版和宏类似，都是编译时展开，宏不限定类型，模版能指定类型

// 模版类
template <typename Type_01>
const Type_01& GetMax(const Type_01& value1, const Type_01& value2) {
	if (value1 > value2) {
		return value1;
	} else {
		return value2;
	}
}

template <typename Type_02>
void DisplayComparison(const Type_02& value1, const Type_02& value2) {
	cout << "GetMax(" << value1 << ", " << value2 << ") = ";
	cout << GetMax(value1, value2) << endl;
}

int main() {
	// 编译器会根据参数类型，自动隐式的指定类型
	int int1 = -101, int2 = 2011;
	DisplayComparison(int1, int2);

	double d1 = 3.14, d2 = 3.1416;
	DisplayComparison(d1, d2);

	string name1("Jack"), name2("Jone");
	DisplayComparison<string>(name1, name2);

	// 模版是类型安全的所以下面一句会编译出错
	// DisplayComparison(1, "compile error");
	return 0;
}