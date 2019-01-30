#include <iostream>
#include <string>
using namespace std;

class President
{
private:
	// private default constructor (prohibits creation from outside)
	President() {};

	// private assignment operator (prohibits assignment)
	President& operator = (const President&);

	string name;

public:
	static President& GetInstance() {
		static President OnlyInstance;	// 已经初始化了，带参数才会有（）
		return OnlyInstance;
	}

	string GetName() {
		return name;
	}

	void SetName(string inputName) {
		name = inputName;
	}
};

int main()
{
	President& onlyPresident = President::GetInstance();
	onlyPresident.SetName("Abraham Lincoln");

	// 默认构造函数私有
	// President second; 	// cannot access constructor
	// President *third = new President();	// cannot access constructor

	// 在创建对象的同时为其赋值会调用copy构造函数，copy构造函数私有
	// President fouth = onlyPresident; // cannot access copy constructor 

	// 赋值运算符私有
	// onlyPresident = President::GetInstance(); // cannot access operator=

	cout << "The name of the president is: " << President::GetInstance().GetName() << endl;

	return 0;
}