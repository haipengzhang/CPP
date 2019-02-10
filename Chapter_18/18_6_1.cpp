1.
不会

2.
不会

3.
clear() 或者 list.erase(list.begin(), list.end());

4.
能，插入其他容器特定的返回在特定位置

1. 编写一个程序，接受用户输入的数字，并将她们插入到list开头
#include <list>
#include <iostream>
using namespace std;

bool SortOnString(const String& str1, const String& str2) {

	return (istr1 < str2);
}

int main() {
	// 1
	int inputInt = 0;
	cin >> inputInt;

	list<int> myList;
	myList.push_front(cin);

	// 2
	myList.push_back(11);
	auto iElement = myList.end();
	
	myList.push_back(22);
	myList.push_back(33);
	myList.push_back(44);

	cout << "Iterator loca element is " << *iElement;

	// 3
	vector<int> myVector = {111, 222, 333};
	myList.insert(myList.begin(), myVector.begin(), myVector.end());

	// 4
	list<int> myStringList = {"cctv", "nhk", "fox", "bbc"};
	myStringList.sort(SortOnString);
	myStringList.reverse();

	return 0;
}