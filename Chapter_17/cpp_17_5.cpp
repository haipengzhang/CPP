#include <iostream>
#include <vector>

int main() {
	using namespace std;
	vector<int> vecIntegers;

	vecIntegers.push_back(50);
	vecIntegers.push_back(1);
	vecIntegers.push_back(987);
	vecIntegers.push_back(1001);
	
	vector<int>::iterator iElementLocator = vecIntegers.begin();
	// auto iElementLocator = vecIntegerArray.begin();
	
	while (iElementLocator != vecIntegers.end()) {
		//  使用迭代器的时候用distance算index
		size_t index = distance(vecIntegers.begin(), iElementLocator);
		cout << "Element at position ";
		cout << index << " is: " << *iElementLocator << endl;

		++iElementLocator;
	}
}