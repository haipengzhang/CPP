#include <queue>
#include <iostream>

// 优先级队列没有front和back 只能通过top取最大或者最小的值
int main() {
	using namespace std;

	priority_queue<int> pqIntegers;
	cout << "Inserting {10, 5, -1, 20} into the priority_queue" << endl;
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