// 破坏性指针 auto_ptr 不建议使用
template <typename T>
class destructivecopy_pointer {
private:
	T* pObject;
public:
	destructivecopy_pointer(T* pInput) : pObject(pInput) {};
	~destructivecopy_pointer() {delete pObject;};

	// 不能接受const的引用
	destructivecopy_pointer(destructivecopy_pointer& source) {
		pObject = source.pObject;
		source.pObject = 0;
	}

	destructivecopy_pointer& operator= (destructivecopy_pointer& source) {
		if (pObject != source.pObject) {
			delete pObject;
			pObject = source.pObject;
			source.pObject = 0;
		}
	}
};

int main() {
	destructivecopy_pointer<int> pNumber(new int);
	destructivecopy_pointer<int> pCopy = pNumber;

	return 0;
}