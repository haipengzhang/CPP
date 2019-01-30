#include <iostream>
#include <string>
using namespace std;

class Human {
private:
	string name;
	int age;

public:
	// constructor
	Human() {
		age = 0;
		cout << "Defalt constructor creates an instance of human" << endl;
	}

	// overload constructor that takes name
	Human(string humansName) {
		name = humansName;
		age = 0;
		cout << "Overload constructor creates " << name << endl;
	}
	// overload constructor that takes name and age
	Human(string humansName, int humansAge) {
		name = humansName;
		age = humansAge;
		cout << "Overload constructor creates " << name << " of " << age << " years " << endl;
	}
	void setName(string humansName) {
		name = humansName;
	}
	void setAge(int humansAge) {
		age = humansAge;
	}
	void introduceSelf() {
		cout << "I am " + name << " and ";
		cout << age << " years old" << endl;
	}
};

int main()
{
	Human firstMan;
	firstMan.setName("Adam");
	firstMan.setAge(30);

	Human firstWoman("Eve");
	firstWoman.setAge(28);

	Human firstChild("Rose", 1);

	firstMan.introduceSelf();
	firstWoman.introduceSelf();
	firstChild.introduceSelf();
	
	return 0;
}

