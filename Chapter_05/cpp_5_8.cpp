#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	// 新的数据类型bitset，方便显示
	cout << "Enter a number (0 - 255)" << endl;
	unsigned short inputNum = 0;
	cin >> inputNum;

	bitset<8> inputBits(inputNum);
	cout << inputNum << " in binary is " << inputBits << endl;

	bitset<8> bitwiseNot(~inputNum);
	cout << "Logical not ~" << endl;
	cout << "~" << inputNum << " = " << bitwiseNot << endl;

	cout << "Logical And, & with 00001111" << endl;
	bitset<8> bitwiseAnd = (0x0F & inputNum);
	cout << "0001111 & " << inputBits << " = " << bitwiseAnd << endl;

	cout << "Logical Or, | with 00001111" << endl;
	bitset<8> bitwiseOr = (0x0F | inputNum);
	cout << "0001111 | " << inputBits << " = " << bitwiseOr << endl;

	cout << "Logical XOr, ^ with 00001111" << endl;
	bitset<8> bitwiseXOr = (0x0F ^ inputNum);
	cout << "0001111 ^ " << inputBits << " = " << bitwiseXOr << endl;

	return 0;
}