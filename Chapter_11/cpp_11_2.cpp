#include <iostream>
using namespace std;

// virtual 作用在函数上
class Fish {
public:
	// virtual 关键字能让引用或者指针指向的对象函数调用的时候调用子类覆盖的方法
	 virtual void Swim() {
		cout << "Fish swims!" << endl;
	}
};

class Tuna : public Fish {
public:
	void Swim() {
		cout << "Tuna swims!" << endl;
	}
};

class Carp : public Fish {
public:
	void Swim() {
		cout << "Tuna swims!" << endl;
	}
};

void MakeFishSwim(Fish& inputFish) {
	inputFish.Swim();
}

int main() {
	Tuna myDinner;
	Carp myLunch;

	MakeFishSwim(myDinner);
	MakeFishSwim(myLunch);

	return 0;
}