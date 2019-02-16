1.
不能

2.
不允许扩展，算法，迭代

3.
不会

1.
int main() {
	bitset<4> myBits(10);
	bitset<4> myAnotherBits(11);
	bitset<4> addResult(myBits.to_ulong() + myAnotherBits.to_ulong());
	cout << addResult;


	myBits.flip();
	return 0;
}