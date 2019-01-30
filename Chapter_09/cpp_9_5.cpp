#include <iostream>
#include <string>
using namespace std;

class Human {
private:
	string name;
	string age;

public:
	// 如果重载了，编译器不会提供默认的constructor
	// overload constructor(no default constructor)
	Human(string humansName, int humansAge) {
		name = humansName;
		age = humansAge;
		cout << "verload constructor creates " << name << " of age" << age << endl;
	}	

	void introduceSelf() {
		cout << "I am " + name << " and ";
		cout << age << " years old" << endl;
	} 
};

int main()
{
	// Human firstMan; cannot compiled, becacuse only constructor has two parmaters;
	Human firstMan("Adam", 30);
	Human firstWoman("Eve", 28);

	firstMan.introduceSelf();
	firstWoman.introduceSelf();

	return 0;
}