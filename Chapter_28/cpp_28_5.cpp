#include <iostream>
#include <exception>
#include <string>
using namespace std;

class CustomException : public std::exception {
	string reason;
public:
	CustomException(const char* why) : reason(why) {};
	virtual const char* what() const throw() {
		return reason.c_str();
	}
};

double Divide(double Divident, double Divisor) {
	if (Divisor == 0) {
		throw CustomException("CustomException: Dividing by 0 is a crime");
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
	} catch (exception& exp) {
		cout << "Exception: " << exp.what() << endl;
		cout << "Sorrry, can't continue!" << endl;
	}
	return 0;
}