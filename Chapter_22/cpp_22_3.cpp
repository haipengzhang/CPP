#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vecIntegers;
	cout << "The vector contains the following sample values: ";

	for (int nCount = 25; nCount < 32; ++nCount) {
		vecIntegers.push_back(nCount);
		cout << nCount << ' ';
	}
	cout << endl << "Enter divisor(>0): ";
	int divisor = 2;
	cin >> divisor;

	vector<int>::iterator iElement;
	iElement = find_if(vecIntegers.begin(), vecIntegers.end(), [divisor](int dividend){
		return (dividend % divisor) == 0;
	});
	
	if (iElement != vecIntegers.end()) {
		cout << "First element in vector divisible by " << divisor;
		cout << ": " << *iElement << endl;
	}
	return 0;
}