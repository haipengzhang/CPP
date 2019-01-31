#include <iostream>
using namespace std;

#pragma clang warning -Wdelete-non-virtual-dtor

// 虚显式拷贝函数实现深拷贝，拷贝构造函数无法声明为虚
class Fish {
public:
	virtual Fish* Clone() = 0;
	virtual void Swim() = 0;
	virtual ~Fish() {}; // 注意，有{}实现  
};

class Tuna : public Fish {
public:
	Fish* Clone() {
		return new Tuna(*this);
	}
	void Swim() {
		cout << "Tuna swims fast in the sea" << endl;
	}
};

class Carp : public Fish {
public:
	Fish* Clone() {
		return new Carp(*this);
	}
	void Swim() {
		cout << "Carp swims slow in the lake" << endl;
	}
	~Carp() {
		cout << "Carp destructor" << endl;
	}
};

int main() {
	const int ARRAY_SIZE = 4;

	Fish* myFishes[ARRAY_SIZE] = {NULL};
	myFishes[0] = new Tuna();
	myFishes[1] = new Carp();
	myFishes[2] = new Tuna();
	myFishes[3] = new Carp();

	Fish* myNewFishes[ARRAY_SIZE] = {NULL};
	for (int index = 0; index < ARRAY_SIZE; ++index) {
		myNewFishes[index] = myFishes[index]->Clone();
	}

	for (int index = 0; index < ARRAY_SIZE; ++index) {
		myNewFishes[index]->Swim();
	}

	for (int index = 0; index < ARRAY_SIZE; ++index) {
		delete myFishes[index];
		delete myNewFishes[index];
	}
	return 0;
}