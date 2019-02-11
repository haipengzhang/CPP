#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

int main() {
	vector<int> vecIntegers(10);
	generate(vecIntegers.begin(), vecIntegers.end(), rand);

	cout << "Elements in the vector of size " << vecIntegers.size();
	cout << " assigned by 'generate' are: " << endl << "{";
	for (size_t nCount = 0; nCount < vecIntegers.size(); ++nCount) {
		cout << vecIntegers[nCount] << " ";
	}
	cout << "}" << endl << endl;

	list<int> listIntegers(10);
	generate_n(listIntegers.begin(), 5, rand);

	cout << "Elements in the list of size: " << listIntegers.size();
	cout << " assigned by 'generate_n' " << endl << "{";
	list<int>::const_iterator iElementLocator;
	for (iElementLocator = listIntegers.begin(); iElementLocator != listIntegers.end(); ++iElementLocator) {
		cout << *iElementLocator << ' ';
	}
	cout << "}" << endl;

	return 0;
}