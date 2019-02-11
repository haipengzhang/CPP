1.
一元谓词

2.
显示数据或者计算元素个数

3.
能保存状态的，实现了operator（）的函数的struct或者类

1|2.
struct DisplayTwiceFun
{
	int callCount = 0;
	void operator() (int& int) {
		cout << int * 2 << end;
		callCount++;
	}
};

3.
template <typename T>
struct SortWithDesen {
bool operator() (const T& item1, const T& item2) {
	return item1 < item2;
};