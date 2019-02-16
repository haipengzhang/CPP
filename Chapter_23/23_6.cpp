1.
std::list::remove_if();

2.
less<>

3.
一次

4.
for_each()返回函数对象

1.
bool sortIgnorCase(string &var1, string &var2) {
	string str1copy(var1), str2copy(var2);
	transform(var1.cbegin(), var1.cend(), str1copy.begin(), ::lower);
	transform(var2.cbegin(), var2.cend(), str2copy.begin(), ::lower);
	return str1copy < str2copy;
}

2.
template <typename T>
int copy2Container(vector<T>& v1, vector<T>& v2) {
	vector<T> vecDestination(v1.size() + v2.size());
	auto iElement = copy(v1.cbegin(), v1.cend(), vecDestination.begin());
	copy(v2.cbegin(), v2.cend(), iElement);
}

3.
stable_sort() 二分查找效率高一些
