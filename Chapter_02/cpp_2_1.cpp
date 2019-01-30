# include <iostream>
// 写在花括号里面只作用花括号范围，在外面作用到整个文件
using namespace std;

// function declare
int DemoConsoleOutput();
int main()
{
	// using namespace std;
	// call i.e. invoke the function
	return DemoConsoleOutput();
}

// function definition
int DemoConsoleOutput()
{
	cout << "This is simple string literal" << endl;
	cout << "Writing number five:" << 5 << endl;
	cout << "Perform division 10 / 5 = " << 10 / 5 << endl;
	cout << "Performing subtraction is 10 - 5 = " << 10 - 5 << endl;
	cout << "Performing multiplication is 10 * 5 = " << 10 * 5 << endl;
	cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
	cout << "Pi more accurately is 22 / 7 = " << 22.0 / 7 << endl;

	return 0;
}