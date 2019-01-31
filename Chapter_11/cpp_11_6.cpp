#include <iostream>
using namespace std;

class Fish {
public:
	// 纯虚函数，子类必须实现
	virtual void Swim() = 0;
};

class Tuna : public Fish {
public:
	void Swim() {
		cout << "Tuna Swims fast in the sea!" << endl;
	}
};

class Crap : public Fish {
	void Swim() {
		cout << "Crap Swims fast in the lake!" << endl;
	} 
};

void MakeFishSwim(Fish& inputFish) {
	inputFish.Swim();
};

int main() {
	// Fish myFish;	// fails, cannot instantiate ABC(抽象基类通常叫ABC)
	Crap myLunch;
	Tuna myDinner;

	MakeFishSwim(myLunch);
	MakeFishSwim(myDinner);

	return 0;
}