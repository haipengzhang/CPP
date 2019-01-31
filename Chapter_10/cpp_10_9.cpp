#include <iostream>
using namespace std;

// 保护继承和私有继承的区别在于，子类的子类是否可以访问基类的public变量和方法
class Motor {
public:
	void SwitchIgnition() {
		cout << "Ignition ON" << endl;
	}

	void PumpFuel() {
		cout << "Fuel in cylinders" << endl;
	}

	void FireCylinders() {
		cout << "Vrooom" << endl;
	}
};

// 如果这里是 private，SuperCar中Move()的实现将编译不通过
class Car : protected Motor {
public:
	void Move() {
		SwitchIgnition();
		PumpFuel();
		FireCylinders();
	}
};

class SuperCar : protected Car {
public:
	void Move() {
		SwitchIgnition();
		PumpFuel();
		FireCylinders();
	}
};

int main() {
	SuperCar myDreamCar;
	myDreamCar.Move();

	return 0;
}

