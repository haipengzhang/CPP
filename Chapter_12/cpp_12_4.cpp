#include <iostream>
using namespace std;

// 在一个简单的智能指针类中实现运算符*和->
template <typename T>
class smart_pointer {
private:
	T* m_pRawPointer;
public:
	smart_pointer(T* pData) : smart_pointer(pData) {};
	~smart_pointer() {delete m_pRawPointer;};

	T& operator*() const {
		return *(m_pRawPointer);
	}

	T* operator->() const {
		return m_pRawPointer;
	}
};

class Date {
private:
	int Day, Month, Year;
	string DateInString;
public:
	Date(int inputDay, int inputMonth, int inputYear) : Day(inputDay), Month(inputMonth), Year(inputYear) {}
	
	void DisplayDate() {
		cout << Day << " / " << Month << " / " << Year << endl;
	}
};

int main() {
	smart_pointer<int> pDynamicInt(new int(42));
	cout << "Dynamically allocated integer value = " << *pDynamicInt;

	smart_pointer<Date> pDate(new Date(25, 12, 2011));
	cout << "Date is = ";
	pDate->DisplayDate();

	return 0;
};