#include <list>
#include <vector>

int main() {
	using namespace std;

	list<int> listIntegers;

	list<int> listWith10Integers(10);

	list<int> listWith4IntegerEach99(10, 99);

	list<int> listCopyAnother(listWith4IntegerEach99);

	vector<int> vecIntegers(10, 2011);

	// cbegin返回的是const迭代器
	list<int> listContainsCopyOfAnother(vecIntegers.cbegin(), vecIntegers.cend());

	return 0;
}