#include <iostream>
using namespace std;

class MonsterDB {
private:
	~MonsterDB() {};	// 析构函数私有话，禁止栈空间初始化实例
public:
	static void DestoryInstance(MonsterDB* pInstance) {
		// static member can access private destructor
		delete pInstance;
	}
};

int main() {
	MonsterDB *pMyDatabase = new MonsterDB();

	// delete pMyDatabase;	//private destructor cannot be invoked

	// use static member to dealloc
	MonsterDB::DestroyInstance(pMyDatabase);
}
