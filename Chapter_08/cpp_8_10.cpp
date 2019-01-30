#include <iostream>
#include <string>
using namespace std;

void cacuArea(const double* const pPi, const double* const pRadius, double* const pArea);

int main()
{
	const double Pi = 3.1415926;
	cout << "Enter radius:";
	double inputRadius = 0;
	cin >> inputRadius;

	double area = 0;
	cacuArea(&Pi, &inputRadius, &area);

	cout << "Area is " << area << endl;
	return 0;
}

void cacuArea(const double* const pPi, const double* const pRadius, double* const pArea)
{
	if (pPi && pRadius && pArea) {
		*pArea = (*pPi) * (*pRadius) * (*pRadius);
	}
}