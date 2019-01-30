#include <iostream>
using namespace std;
double area(double inputRadius, double Pi = 3.14);

int main()
{
	cout << "Enter radius: ";
	double  radius = 0;
	cin >> radius;

	cout << "Pi is 3.14, do yout wish to change this (y/n)?";
	char changePi = 'n';
	cin >> changePi;

	double circleArea = 0;
	if (changePi == 'y') {
		cout << "Enter new Pi: ";
		double newPi = 3.14;
		cin >> newPi;
		circleArea = area(radius, newPi);
	} else {
		circleArea = area(radius); //忽略第二个参数
	}
	cout << "Area is: " << circleArea << endl;
	return 0;
}

double area(double inputRadius, double Pi)
{
	return Pi * inputRadius * inputRadius;
}