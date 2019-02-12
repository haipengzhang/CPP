#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <functional>
using namespace std;

int main() {
	string sample("This is a Test string!");
	cout << "The sample string is: " << sample << endl;
	string strLowerCaseCopy;
	strLowerCaseCopy.resize(sample.size());

	//接受一元函数toupper&tolower
	transform(sample.begin(), sample.end(), strLowerCaseCopy.begin(), ::tolower);

	cout << "Result of 'transform' on the string with 'tolower':" << endl;
	cout << "\"" << strLowerCaseCopy << "\"" << endl << endl;

	vector<int> vecIntegers1, vecIntegers2;
	for (int nNum = 0; nNum < 10; ++nNum) {
		vecIntegers1.push_back(nNum);
		vecIntegers1.push_back(10 - nNum);
	}

	deque<int> dqResultAddition(vecIntegers1.size());
	transform(vecIntegers1.begin(), vecIntegers1.end(), vecIntegers2.begin(), dqResultAddition.begin(), plus<int>());
	cout << "Result of 'transform' using binary function 'plus': " << endl;
	cout << endl << "Index vector1 + vector2 = Result(in deque)" << endl;

	for (size_t nIndex = 0; nIndex < vecIntegers1.size(); ++nIndex) {
		cout << nIndex << " \t " << vecIntegers1[nIndex] << "\t+  ";
		cout << vecIntegers2[nIndex] << " \t =   ";
		cout << dqResultAddition[nIndex] << endl;
	}
	return 0;
}

