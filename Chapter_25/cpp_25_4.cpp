#include <vector>
#include <iostream>
using namespace std;

int main() {
	vector<bool> vecBoolFlags(3);
	vecBoolFlags[0] = true;
	vecBoolFlags[1] = true;
	vecBoolFlags[2] = false;

	vecBoolFlags.push_back(true);

	cout << "The contents of the vector are: " << endl;
	for (size_t nIndex = 0; nIndex < vecBoolFlags.size(); ++ nIndex) {
		cout << vecBoolFlags[nIndex] << ' ';
	}
	cout << endl;
	vecBoolFlags.flip();

	cout << "The contents of the vector are: " << endl;
	for (size_t nIndex = 0; nIndex < vecBoolFlags.size(); ++ nIndex) {
		cout << vecBoolFlags[nIndex] << ' ';
	}

	cout << endl;
	return 0;
}