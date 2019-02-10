1.
不是，越往后时间越短

2.
10个

3.
擦除最后一个元素

4.
CMammal类型的数组

5.
能，at()或者[]


1.
#include <iostream>
#include <vector>
using namespace std;

// bool isContainInVector(int inputInt, const vector<int>& inputVector) {
// 	for (auto iElement = inputVector.begin(); iElement != inputVector.end(); ++iElement) {
// 		if (inputInt == *iElement){
// 			return true;
// 		}
// 	}
// 	return false;
// }

find(vector.begin(), vector.end(), inputInt);

int main() {
	int inputInt = 0;
	cin >> inputInt;

	vector<int> myVector;
	myVector.push_back(inputInt);

	return 0;
}

void inputSize(int size, vector<int>& inputVector) {
	inputVector.push_back(size);
	cout << size << endl;
}





