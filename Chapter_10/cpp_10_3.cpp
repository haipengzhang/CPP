#include <iostream>
using namespace std;

// 包含初始化列表的派生类构造函数
class Fish {
private:
	bool freshWaterFish;
public:
	Fish(bool isFreshWater) : freshWaterFish(isFreshWater) {}

	void Swim() {
		if (freshWaterFish) {
			cout << "Swims in lake" << endl;
		} else {
			cout << "Swims in sea" << endl;
		}
	}
};

class Tuna : public Fish {
public:
	Tuna() : Fish(false) {}
};

class Carp : public Fish {
public:
	Carp() : Fish(true) {}
};

int main() {
	Carp myLunch;
	Tuna myDinner;

	cout << "Getting my food to swim" << endl;

	cout << "Lunch: ";
	myLunch.Swim();

	cout << "Dinner: ";
	myDinner.Swim();

	return 0;
}