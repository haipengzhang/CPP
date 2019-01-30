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

	switch(day) {
		case Sunday:
			cout << "Sunday was named after the Sun" << endl;
			break;
		case Monday:
			cout << "Tuesday was named after the Mars" << endl;
			break;
		case Tuesday:
			cout << "Wednesday was named after the Mercury" << endl;
			break;
		case Wednesday:
			cout << "Thursday was named after the Jupiter" << endl;
			break;
		case Thursday:
			cout << "Friday was named after the Venus" << endl;
			break;
		case Friday:
			cout << "Sunday was named after the Sun" << endl;
			break;
		case Saturday:
			cout << "Saturday was named after the Saturn" << endl;
			break;
		default:
			cout << "Wrong input, excute again" << endl;
			break;
	}
	return 0;
}