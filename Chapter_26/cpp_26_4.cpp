// uniqur_ptr 不允许复制和赋值
#include <iostream>
#include <memory>
using namespace std;

class Fish {
public:
	Fish() {cout << "Fish: Constructed!" << endl;}
	~Fish() {cout << "Fish: Destructed!" << endl;}
	void Swim() const {cout << "Fish swims in water" << endl;};
};

void MakeFishSwim(const uniqur_ptr<Fish>& inFish) {
	inFish->Swim();
}

int main() {
	uniqur_ptr<Fish> smartFish(new Fish);
	smartFish->Swim();
	MakeFishSwim(smartFish);

	uniqur_ptr<Fish> copySmartFish;
	// copySmartFish = smartFish; error operator = is private

	return 0;
}