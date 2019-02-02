#include <iostream>
using namespace std;

class Date {
private:
	int day, month, year;
public:
	Date(int inputDay, int inputMonth, int inputYear): day(inputDay), month(inputMonth), year(inputYear)  {};

	void operator+=(int daysToAdd) {
		day += daysToAdd;
	}

	void operator-=(int daysToSub) {
		day -= daysToSub;
	}

	void DisplayDate() {
		cout << day << " / " << month << " / " << year << endl;
	}
};

int main() {
	Date holiday(25, 12, 2011);

	cout << "Holiday on: ";
	holiday.DisplayDate();

	cout << "holiday -= 19 gives: ";
	holiday -= 19;
	holiday.DisplayDate();
	
	cout << "holiday += 6 gives: ";
	holiday += 6;
	holiday.DisplayDate();

	return 0;
}