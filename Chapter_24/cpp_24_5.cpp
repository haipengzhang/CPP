#include <queue>

int main() {
	using namespace std;

	priority_queue<int> pqIntegers;

	priority_queue<double> pqDoubles;

	priority_queue<int, deque<int>, greater<int>> pqIntegers_Inverse;

	priority_queue<int> pqCopy(pqIntegers);

	return 0;
}