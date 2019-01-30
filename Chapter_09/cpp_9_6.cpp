#include <iostream>
#include <string>
using namespace std;

class Human {
private:
	string name;
	int age;
public:
	// 参数包含初始化列表的构造函数
	Human(string inputName = "Adam", int inputAge = 25) :name(inputName), age(inputAge)
	{
		cout << "Overloaded constructor creates " << name;
		cout << " of age " << age << endl;
	}
};

int main()
{
	// 会编译通过因为参数有默认值，所以可以编译通过
	Human firstMan;
	Human firstWoman("Eve", 18);

	return 0;
}