#include <iostream>
using namespace std;

const double Pi = 3.14159;

double area(double inputRadius);
double circumference(double inputRadius);

int main()
{
	cout << "Enter radius :";
	double radius = 0;
	cin >> radius;

	// call function Area
	cout << "Area is: " << area(radius) << endl;
	cout << "Circumference is: " << circumference(radius) << endl;

	return 0;
}

double area(double inputRadius)
{
	return Pi * inputRadius * inputRadius;
}

double circumference(double inputRadius)
{
	return 2 * Pi * inputRadius;
}