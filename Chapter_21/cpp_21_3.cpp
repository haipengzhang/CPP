#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

template <typename numberType>
struct IsMultiple {
	numberType divisor;
	IsMultiple(const numberType& iDivisor) {
		divisor = iDivisor;
	}
	bool operator() (const numberType& element) const {
		return ((element % divisor) == 0);
	}
};

int main() {
	vector<int> vecIntegers;
	cout << "The vector contains the following sample values:";

	for (int nCount = 25; nCount < 32; ++nCount) {
		vecIntegers.push_back(nCount);
		cout << nCount << ' ';
	}

	cout << endl << "Enter divisor(>0): ";
	int divisor = 2;
	cin >> divisor;

	auto iElement = find_if(vecIntegers.begin(), vecIntegers.end(), IsMultiple<int>(divisor));

	if (iElement != vecIntegers.end()) {
		cout << "First element in vector divisible by " << divisor;
		cout << ": " << *iElement << endl;
	}
	return 0;
}