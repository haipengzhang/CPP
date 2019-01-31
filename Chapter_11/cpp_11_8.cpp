#include <iostream>
using namespace std;

// 子类使用虚继承解决菱形问题
class Animal {
public:
	Animal() {
		cout << "Animal constructor" << endl;
	}
	int age;
};

class Mammal : public virtual Animal {};

class Bird : public virtual Animal {};

class Reptile : public virtual Animal {};

class Platypus : public Mammal, public Bird, public Reptile {
public:
	Platypus() {
		cout << "Platypus constructor" << endl;
	}
};

int main() {
	Platypus duckBilledP;
	
	duckBilledP.age = 25;
	return 0;
}