#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// for_each
template <typename elementType>
struct DisplayElementKeepCount {
	int count;
	DisplayElementKeepCount() : count(0) {}

	void operator() (const elementType& element) {
		++count;
		cout << element << ' ';
	}
};

int main() {
	vector<int> vecIntegers;
	for (int nCount = 0; nCount < 10; ++nCount) {
		vecIntegers.push_back(nCount);
	}
	cout << "Displaying the vector of integers: " << endl;

	 DisplayElementKeepCount<int> functor = for_each(vecIntegers.begin(),
	 	vecIntegers.end(), DisplayElementKeepCount<int>());

	 cout << endl;

	 cout << "'" << functor.count << "' elements were displayed" << endl;
	 string sample("for_each and strings");
	 cout << "String: " << sample << ", length: " << sample.length() << endl;

	 cout << "String displayed using lambda:" << endl;
	 int numChars = 0;
	 for_each(sample.begin(), sample.end(), [&numChars](char c){
	 	cout << "'" << numChars << "' characters were displayed" << endl;
	 });
	 return 0;
}