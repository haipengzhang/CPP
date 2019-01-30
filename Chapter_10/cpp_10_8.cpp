#include <iostream>
using namespace std;

// 私有继承
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

class Car : private Motor {
public:
	void Move() {
	SwitchIgnition();
	PumpFuel();
	FireCylinders();
	}
};

int main() {
	Car myDreamCar;
	myDreamCar.Move();
	// myDreamCar.Motor::SwitchIgnition(); 编译不通过
	return 0;
}