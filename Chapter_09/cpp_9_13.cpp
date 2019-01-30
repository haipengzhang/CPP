#include <iostream>
#include <string>
using namespace std;

class Human {
private:
	string name;
	int age;

	friend void DisplayAge(const Human& person);

public:
	Human(string inputName, int inputAge) {
		name = inputName;
		age = inputAge;
	}
};

// 类成员方法在外部实现ok的
void DisplayAge(const Human& person) {
	cout << person.age << endl;
}

int main() {
	Human firstMan("Adam", 25);
	cout << "Accessing private member age via friend:";
	DisplayAge(firstMan);

	return 0;
}