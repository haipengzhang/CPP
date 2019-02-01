#include <iostream>
using namespace std;

// 双目运算符
class Date {
private:
	int day, month, year;
public:
	Date(int inputDay, int inputMonth, int inputYear): day(inputDay), month(inputMonth), year(inputYear)  {};

	Date operator+(int daysToAdd) {
		Date newDate(day + daysToAdd, month, year);
		return newDate;
	}

	Date operator-(int daysToSub) {
		return Date(day - daysToSub, month, year);
	}

	void DisplayDate() {
		cout << day << " / " << month << " / " << year << endl;
	}
};

int main() {
	Date holiday(25, 12, 2011);

	cout << "Holiday on: ";
	holiday.DisplayDate();

	Date preHoliday(holiday - 19);
	cout << "PreHoliday on: ";
	preHoliday.DisplayDate();

	Date nextHoliday(holiday + 6);
	cout << "nextHoliday on: ";
	nextHoliday.DisplayDate();

	return 0;
}