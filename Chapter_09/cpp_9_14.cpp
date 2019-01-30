#include <iostream>
#include <string>
using namespace std;

class Human {
private:
	string name;
	int age;

	friend class Utility;	//Utility类是Human类的友元，能访问所有的私有方法和变量
public:
	Human(string inputName, int inputAge) {
		name = inputName;
		age = inputAge;
	}
};

class Utility {
public:
	// static 可以理解为类方法
	static void DisplayAge(const Human& person) {
		cout << person.age << endl;
	}
};

int main() {
	Human firstMan("Adam", 25);
	cout << "Accesing private member age via friend class:";
	Utility::DisplayAge(firstMan);
}