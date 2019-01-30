#include <iostream>
using namespace std;
const double Pi = 3.14159;

double surfaceArea(double inputRadius, double height);

int main()
{
	double inRadius = 0;
	cin >> inRadius;

	double inHeight = 0;
	cin >> inHeight;

	cout << "SurfaceArea: " << surfaceArea(inRadius, inHeight) << endl;
	return 0;
}

double surfaceArea(double inputRadius, double height)
{
	double area = 2 * Pi * inputRadius * inputRadius + 2 * Pi * inputRadius * height;
	return area;
}