#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
	string name;
	int age;

public:
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
	/*
	 * 直接这样就初始化了一个对象，或者通过new Human()返回对象指针
	 * Human* pTom = new Human();
	 * (*pTom).introduceSelf();
	 * pTom->dateOfBirth = "1970";
	 * pTom->introduceSelf();
	 * delete pTom;
	 * =====
	 * Human pTom;
	 * Human* pTom = &pTom;
	 * pTom->dateOfBirth = "1970";
	 * pTom->introduceSelf();
	 */
	Human firstMan;	// 数组和基础类型初始化会赋初值，对象不用；
	firstMan.setName("Adam");
	firstMan.setAge(28);

	Human firstWoman;
	firstWoman.setName("Eve");
	firstWoman.setAge(28);

	firstMan.introduceSelf();
	firstWoman.introduceSelf();

	return 0;
}