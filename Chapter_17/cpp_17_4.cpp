#include <iostream>
#include <vector>

int main() {
	using namespace std;
	vector<int> vecIntegerArray;

	vecIntegerArray.push_back(50);
	vecIntegerArray.push_back(1);
	vecIntegerArray.push_back(987);
	vecIntegerArray.push_back(1001);

	for (size_t index = 0; index < vecIntegerArray.size(); ++index) {
		cout << "Element[" << index << "] = ";
		cout << vecIntegerArray[index] << endl;
	}
	
	vecIntegerArray[2] = 2019;
	cout << "After replacement: " << endl;
	cout << "Element[2] = " << vecIntegerArray[2] << endl;

	return 0;
}