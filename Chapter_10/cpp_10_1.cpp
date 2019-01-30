#include <iostream>
using namespace std;

class Fish {
public:
	bool freshWaterFish;
	void Swim() {
		if (freshWaterFish) {
			cout << "Swims in lake" << endl;
		} else {
			cout << "Swims in sea" << endl;
		}
	}
};

// 金枪鱼
class Tuna : public Fish {
public:
	Tuna() {
		freshWaterFish = false;
	}
};

// 鲤鱼
class Carp : public Fish {
public:
	Carp() {
		freshWaterFish = true;
	}
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