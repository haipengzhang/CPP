#include <iostream>
using namespace std;

class Circle {
private:
	// 注意成员变量不能声明的时候赋初始值
	double raduis;
	const double Pi;

public:
	// 初始值列表有默认值的可以不传参数
	Circle(double inputRaduis):raduis(inputRaduis), Pi(3.1415926)  {
		raduis = inputRaduis;
	}

	double caculateArea() {
		return raduis * raduis * Pi;
	}

	double caculateCircumference() {
		return 2 * raduis * Pi;
	}
};

int main() {
	Circle myCirle(3);
	cout << "My Circle area is " << myCirle.caculateArea() << endl;
	cout << "My Circle circumference is " << myCirle.caculateCircumference() << endl;
	return 0;
}