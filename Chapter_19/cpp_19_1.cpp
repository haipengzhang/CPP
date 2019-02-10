#include <set>

template <typename T>
struct SortDescending {
	bool operator()(const T& lhs, const T& rhs) const {
		return (lhs > rhs);
	}
};

int main() {
	using namespace std;

	set<int> setIntegers1;
	multiset<int> msetIntegers1;

	set<int, SortDescending<int>> setIntegers2;
	multiset<int, SortDescending<int>> msetIntegers2;
	
	set<int> setIntegers3(setIntegers1);
	multiset<int> msetIntegers3(setIntegers1.cbegin(), setIntegers1.cend());
	return 0;
}