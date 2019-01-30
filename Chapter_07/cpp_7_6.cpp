#include <iostream>
using namespace std;
const double Pi = 3.14159;

void queryAndCaculate()
{
	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;

	cout << "Area: " << Pi * radius * radius << endl;

	cout << "Do you wish to calculate circumference(y/n)?";
	char calcCircum = 'n';
	cin >> calcCircum;

	if (calcCircum == 'n') return;

	cout << "circumference: " << 2 * Pi * radius << endl;
	return;
}

int main()
{
	queryAndCaculate();
	return 0;
}