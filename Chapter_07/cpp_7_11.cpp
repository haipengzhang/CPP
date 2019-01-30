#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void displayNums(vector<int> &dynArray)
{
	// lambda
	for_each(dynArray.begin(), dynArray.end(), [](int element) {
		cout << element << " ";
	});
	cout << endl;
}

int main()
{
	vector<int> myNumbers;
	myNumbers.push_back(501);
	myNumbers.push_back(-1);
	myNumbers.push_back(25);
	myNumbers.push_back(-35);

	displayNums(myNumbers);

	cout << "Sorting them in descending order!" << endl;
	sort(myNumbers.begin(), myNumbers.end(), [](int num1, int num2) {
		return num2 < num1;
	});
	
	displayNums(myNumbers);

	return 0;

}