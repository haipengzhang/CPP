1. 14.7.1 头文件用宏判断一下是否引入，没有才include；
2. 前者debug置成0后者取消这个映射；
3. 4
4. 12
5. #define SPLIT(x) ((x)/5)

1.#define multi(x, y) ((x) * (y))

2.
template <typename T>
T multi(const T &t1, const T &t2) {
	return t1 * t2;
}

3.
template <typename T>
void swap(T &t1, T &t2) {
	T temp;
	temp = t1;
	t1 = t2;
	t2 = temp;
}

4.
#define QUARTER(x) ((x) / 4)

5.
template <typename T1 = int, typename T2 = double>
class MyArrays {
private:
	T1 myA1[10];
	T2 myA2[10];
public:
	const T1 GetMyA1WithIndex(int index) {
		return myA1[index];
	}

	const T2 GetMyA2WithIndex(int index) {
		return myA2[index];
	}
};