#include <iostream>
using namespace std;

// 此程序为了演示多继承如果不用虚函数带来的菱形问题
class Animal {
public:
	Animal() {
		cout << "Animal constructor" << endl;
	}
	int age;
};

class Mammal : public Animal {};

class Bird : public Animal {};

class Reptile : public Animal {};

class Platypus : public Mammal, public Bird, public Reptile {
public:
	Platypus() {
		cout << "Platypus constructor" << endl;
	}
};

int main() {
	Platypus duckBilledP;

	// uncomment next line to see compile failure
	// age is ambiguous as there are three instances of base animal
	// duckBilledP.Age = 25;
	return 0;
}