#include <queue>
#include <iostream>

int main() {
	using namespace std;
	priority_queue<int, vector<int>, greater<int>> pqIntegers;

	cout << "Inserting {10, 5, -1, 20} into the priority queue" << endl;
	pqIntegers.push(10);
	pqIntegers.push(5);
	pqIntegers.push(-1);
	pqIntegers.push(20);

	cout << "Deleting the " << pqIntegers.size() << " elements" << endl;
	while (!pqIntegers.empty()) {
		cout << "Deleting topmost element: " << pqIntegers.top() << endl;
		pqIntegers.pop();
	}

	return 0;
}