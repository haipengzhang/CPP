#include <iostream>
using namespace std;

class Human
{
private:
	int age;
public:
	void setAge(int inputAge) {
		age = inputAge;
	}
	int getAge() {
		if (age > 30) {
			return age - 2;
		} else {
			return age;
		}
	}	
};

int main()
{
	Human firstMan;
	firstMan.setAge(35);

	Human firstWoman;
	firstWoman.setAge(22);

	cout << "Age of firstMan " << firstMan.getAge() << endl;
	cout << "Age of firstWoman " << firstWoman.getAge() << endl;

	return 0;
}