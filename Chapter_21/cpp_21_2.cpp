#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

template<typename elementType>
class DisplayElementKeepCount {
public:
	int count;
	DisplayElementKeepCount():count(0) {}

	void operator()(const elementType& element) {
		++count;
		cout << element << ' ';
	}
};

int main() {
	vector<int> vecIntegers;
	for (int nCount = 0; nCount < 10; ++nCount) {
		vecIntegers.push_back(nCount);
	}

	cout << "Displaying the vector of integers:" << endl;

	DisplayElementKeepCount<int> result;
	// 返回值是最后一个函数对象
	result = for_each(vecIntegers.begin(), vecIntegers.end(), DisplayElementKeepCount<int>());

	cout << endl << endl;


	cout << "'" << result.count << "'elements were displayed!" << endl;

	return 0;
}