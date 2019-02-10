#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class CompareStringNoCase {
public:
	bool operator() (const string& str1, const string& str2) const {
		string str1LowerCase;
		str1LowerCase.resize(str1.size());

		transform(str1.begin(), str1.end(), str1LowerCase.begin(), ::tolower);

		string str2LowerCase;
		str2LowerCase.resize(str2.size());

		transform(str2.begin(), str2.end(), str2LowerCase.begin(), ::tolower);
		
		return (str1LowerCase < str2LowerCase);
	}
};

template <typename T>
void DisplayContents(const T& input) {
	for (auto iElement = input.cbegin();
		iElement != input.cend();
		++iElement) {
		cout << *iElement << endl;
	}
}

int main() {
	vector<string> vecNames;
	vecNames.push_back("jim");
	vecNames.push_back("Jack");
	vecNames.push_back("Sam");
	vecNames.push_back("Anna");

	DisplayContents(vecNames);

	sort(vecNames.begin(), vecNames.end());
	DisplayContents(vecNames);

	sort(vecNames.begin(), vecNames.end(), CompareStringNoCase());
	DisplayContents(vecNames);

	return 0;
}