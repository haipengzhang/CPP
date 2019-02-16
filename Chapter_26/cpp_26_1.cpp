
// 一个基本的结构 智能指针
template <typename T>
class smart_pointer {
private:
	T *m_pRawPointer;
public:
	smart_pointer(T* pData) : m_pRawPointer(pData) {}
	~smart_pointer() {delete pData;};

	// copy constructor
	smart_pointer(const smart_pointer& anotherSP);
	// copy assignment operator
	smart_pointer& operator= (const smart_pointer& anotherSP);

	T& operator*() const {
		return *(m_pRawPointer);
	}
	T* operator->() const {
		return m_pRawPointer;
	}
};