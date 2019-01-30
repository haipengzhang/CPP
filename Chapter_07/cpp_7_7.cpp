#include <iostream>
using namespace std;

const double Pi = 3.1415926;

double area(double radius);
double area(double radius, double height);

int main()
{
	cout << "Enter z for cylinder, c for circle!" << endl;
	char userInput = 'c';
	cin >> userInput;
	if (userInput == 'c') {
		cout << "Enter Radius";
		int inputRadius = 0;
		cin >> inputRadius;
		cout << "Radius: " << inputRadius << "Area: " << area(inputRadius) << endl;
		return 0;
	}
	if (userInput == 'z') {
		cout << "Enter Radius: ";
		int inputRadius = 0;
		cin >> inputRadius;

		cout << "Enter height: ";
		int inputHeight = 0;
		cin >> inputHeight;

		cout << "Radius:" << inputRadius << " Height:" << inputHeight << " Area:" << area(inputRadius, inputHeight) << endl;
		return 0;
	} 
	return 0;
}

double area(double radius)
{
	return Pi * radius * radius;
}

double area(double radius, double height)
{
	return 2 * area(radius) + height * 2 * Pi * radius;
}