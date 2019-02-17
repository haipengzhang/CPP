#include <iostream>
#include <iomanip>
using namespace std;

// 使用setw()设置字段宽度，并使用setfill()指定填充字符
int main() {
	cout << "Hey - default!" << endl;
	cout << setw(35); // set field width to 25 colums
	cout << "Hey - right aligned!" << endl;

	cout << setw(35) << setfill('*');
	cout << "Hey - right aligned!" << endl;

	cout << "Hey - back to default!" << endl;

	return 0;
}