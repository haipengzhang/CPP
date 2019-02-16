// 深复制
templte <typename T>
class deepcopy_smart_pointer
{
private:
	T* m_pObject;
public:
	// ...other function

	// copy construnctor
	deepcopy_smart_pointer(const deepcopy_smart_pointer& source) {
		// clone() is virtual:
		m_pObject = source->Clone();
	}

	// copy assignment operator
	deepcopy_smart_pointer& operator= (const deepcopy_smart_pointer& source) {
		if (m_pObject) {
			delete m_pObject;
		}
		m_pObject = source->Clone();
	}
}