1.
[];

2.
[state]

3.
-> 如果只有一行就不用显示指定

1.
[](int t1, int t2) {
	return (t1 < t2);
}

2.
int numInput = 0;
cin >> numInput;
[numInput](int& element) {
	element += numInput;
}