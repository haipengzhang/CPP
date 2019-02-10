#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 迭代器的使用
int main() {
	// a dynamic array of integers
	vector<int> vecIntegerArray;

	// insert sample integers into the array
	vecIntegerArray.push_back(50);
	vecIntegerArray.push_back(2991);
	vecIntegerArray.push_back(23);
	vecIntegerArray.push_back(9999);

	cout << "The contents of the vector are: " << endl;

	// walk the vector and read value using an iterator
	// iterator是vector<T>模版类定义的变量
	// 等同于auto iArrayWalker = vecIntegerArray.begin(); 使用auto初始化的时候一定要赋值
	vector<int>::iterator iArrayWalker = vecIntegerArray.begin();
	
	while(iArrayWalker != vecIntegerArray.end()) {
		// write the value to the screen
		cout << *iArrayWalker << endl;
		++iArrayWalker;
	}

	// find an element(say 2991) int the array using the 'find' algorithm
	vector<int>::iterator iElement = find(vecIntegerArray.begin(), vecIntegerArray.end(), 2991);

	// check if value was found
	if (iElement != vecIntegerArray.end()) {
		// value was found... Determine position in the array:
		int position = distance(vecIntegerArray.begin(), iElement);
		cout << "Value " << *iElement;
		cout << " found in the vector at postion: " << position << endl;
	}
	return 0;
}