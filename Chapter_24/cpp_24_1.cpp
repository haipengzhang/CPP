#include <stack>
#include <vector>

int main() {
	using namespace std;

	stack<int> stackInts;
	stack<double> stackDoubles;
	// 显示指定vector为container
	stack<double, vector<double>> stackDoublesInVector;
	
	// 拷贝
	stack<int> stackIntsCopy(stackInts);
}