1.
可以, 提供谓词

2.
对象 <

3.
不可以

1.
bool operator< (const Person& person1, const Person& person2) {
	if (person1.isFemale && !person2.isFemale) {
		return true;
	} else if (person1.age  < person2.age) {
		return true;
	}
	return false;
}

2.

int main() {
	vector<int> myVector;
	stack<int> myStack;

	int inputInt = 0;
	do {
		cin >> inputInt;
		myStack.push(inputInt);
	} while (inputInt == 0)
	myVector.push_back(myStack.pop());

	return 0;
}
