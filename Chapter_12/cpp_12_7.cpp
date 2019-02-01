#include <iostream>
using namespace std;

class Date {
private:
	int day, month, year;
public:
	Date(int inputDay, int inputMonth, int inputYear): day(inputDay), month(inputMonth), year(inputYear)  {};

	bool operator==(const Date& compareTo) {
		return ((day == compareTo.day) && (month == compareTo.month) && (year == compareTo.year));
	}

	bool operator!=(const Date& compareTo) {
		// return ((day != compareTo.day) || (month != compareTo.month) || (year != compareTo.year));
		return !(this->operator==(compareTo));
	}

	void DisplayDate() {
		cout << day << " / " << month << " / " << year << endl;
	}
};

int main() {
	Date holiday1(25, 12, 2011);
	Date holiday2(31, 12, 2011);

	cout << "Holiday 1 is: ";
	holiday1.DisplayDate();
	cout << "Holiday 2 is: ";
	holiday2.DisplayDate();

	if (holiday1 == holiday2) {
		cout << "Equality operator: the two are on the same day" << endl;
	} else {
		cout << "Equality operator: the two are on different day" << endl;
	}

	if (holiday1 != holiday2) {
		cout << "Inequality operator: the two are on different day" << endl;
	} else {
		cout << "Inequality operator: the two are on the same day" << endl;
	}
	
	return 0;
}