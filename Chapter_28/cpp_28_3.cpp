#include <iostream>
using namespace std;

// 自己抛异常
double Divide(double Divident, double Divisor) {
	if (Divisor == 0) {
		throw "Dividing by 0 is a crime";
	}
	return (Divident / Divisor);
}

int main() {
	cout << "Enter divident: ";
	double divident = 0;
	cin >> divident;

	cout << "Enter divisor: ";
	double divisor = 0;
	cin >> divisor;

	try {
		cout << "Result of division is: " << Divide(divident, divisor);
	} catch (char* exp) {
		cout << "Exception: " << exp << endl;
		cout << "Sorrry, can't continue!" << endl;
	}
	return 0;
}