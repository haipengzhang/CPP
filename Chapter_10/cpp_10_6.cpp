#include <iostream>
using namespace std;

// 子类隐藏基类的方法
class Fish {
public:
	void Swim() {
		cout << "Fish swims...!" << endl;
	}
	void Swim(bool isFreshWater) {
		if (isFreshWater) {
			cout << "Swims in lake" << endl;
		} else {
			cout << "Swims in sea" << endl;
		}
	}
};

class Tuna : public Fish {
public:
	// 这种会隐藏父类中所有Swim的重载, 除非所有重载函数都覆盖
	void Swim() {
		cout << "Tuna swims real fast" << endl;
	}

	// 可通过作用域解决被隐藏的问题 myDinner
	// using Fish:Swim;
};

int main() {
	Tuna myDinner;

	cout << "Getting my food to swim" << endl;

	// myDinner.Swim(false); // compile failure Fish::Swim(bool) is hidden
	myDinner.Swim();

	// myDinner.Fish::Swim; unhide Swim method in base class Fish
	return 0;
}