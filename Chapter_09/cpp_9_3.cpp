#include <iostream>
using namespace std;

class Human {
private:
	int age;
	string name;
public:	
	// constructor
	Human() {
		age = 0;
		cout << "Constructed an instance of class human" << endl;
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

	Human firstWoman;
	firstWoman.setName("Eve");
	firstWoman.setAge(28);

	firstMan.introduceSelf();
	firstWoman.introduceSelf();

	return 0;
}