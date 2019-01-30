#include <iostream>
using namespace std;

int main()
{
	enum DaysOfWeek
	{
		Sunday = 0,
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday
	};

	cout << "Find what days of the week are named after!" << endl;
	cout << "Enter a number for a day (Sunday = 0): ";

	int day = Sunday;

	// cin 只能接受int等基本数据类型，不能写成枚举
	cin >> day;

	if (day == Sunday) {
		cout << "Sunday was named after the Sun" << endl;
	} else if (day == Monday) {
		cout << "Monday was named after the Moon" << endl;
	} else if (day == Tuesday) {
		cout << "Tuesday was named after the Mars" << endl;
	} else if (day == Wednesday) {
		cout << "Wednesday was named after the Mercury" << endl;
	} else if (day == Thursday) {
		cout << "Thursday was named after the Jupiter" << endl;
	} else if (day == Friday) {
		cout << "Friday was named after the Venus" << endl;
	} else if (day == Saturday) {
		cout << "Saturday was named after the Saturn" << endl;
	} else {
		cout << "Wrong input, excute again" << endl;
	}
	return 0;

}