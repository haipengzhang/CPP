#include <iostream>
using namespace std;

const double Pi = 3.1415926;

void area(double radius, double &result)
{
	result =  Pi * radius * radius;
}

int main()
{
	cout << "Input radius:" << endl;
	double inputRadius = 0;
	cin >> inputRadius;
	cout << "Area:" << endl;
	double resultArea = 0;
	area(inputRadius, resultArea);
	cout << "Output area:" << resultArea << endl;

	return 0;
}