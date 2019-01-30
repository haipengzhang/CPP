#include <iostream>
using namespace std;

class Fish {
protected:
	bool freshWaterFish;
public:
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
	
	// myLunch.freshWaterFish = false;
	return 0;
}

