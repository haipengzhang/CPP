#include <iostream>
using namespace std;

// virtual 作用在析构函数上，避免内存泄漏
class Fish {
public:
	Fish() {
		cout << "Constructed Fish" << endl;
	}
	virtual ~Fish() {
		cout << "Destroyed Fish" << endl;
	}
};

class Tuna : public Fish {
public:
	Tuna() {
		cout << "Constructed Tuna" << endl;
	}
	~Tuna() {
		cout << "Destroyed Tuna" << endl;
	}
};

void DeleteFishMemory(Fish* pFish) {
	delete pFish;
}

int main() {
	cout << "Allocating a Tuna on the fress store:" << endl;
	Tuna* pTuna = new Tuna;
	cout << "Deleting the Tuna:" << endl;
	// 如果传引用在函数外释放，会只调用引用类的析构函数
	DeleteFishMemory(pTuna);
	// delete pTuna; 如果这么释放也不会存在问题

	cout << "Instantiating a Tuna on the stack:" << endl;
	Tuna myDinner;
	cout << "Automatic destruction as it goes out of scope: " << endl;

	return 0;
}

