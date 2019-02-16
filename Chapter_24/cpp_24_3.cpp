#include <queue>
#include <list>

int main() {
	using namespace std;
	queue<int> qIntegers;
	queue<double> qDoubles;
	queue<double, list<double>> qDoublesInList;
	queue<int> qCopyIntegers(qIntegers);

	return 0;
}