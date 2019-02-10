#include <iostream>
#include <vector>

int main() {
	using namespace std;

	vector<int> vecIntegers(5);

	cout << "Vector of integers was instantiated with " << endl;
	cout << "Size: " << vecIntegers.size();
	cout << ", Capacity: " << vecIntegers.capacity() << endl;

	vecIntegers.push_back(666);
	cout << "After inserting an additional element..." << endl;
	cout << "Size: " << vecIntegers.size();
	cout << ", Capacity: " << vecIntegers.capacity() << endl;

	vecIntegers.push_back(777);
	cout << "After inserting yet additional element..." << endl;
	cout << "Size: " << vecIntegers.size();
	cout << ", Capacity: " << vecIntegers.capacity() << endl;
}