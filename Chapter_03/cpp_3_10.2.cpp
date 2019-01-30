#include <iostream>
using namespace std;

int main()
{
	const float Pi = 3.1415926;
	
	float rudis = 0.0f;
	cout << "Enter rudis: ";
	cin >>  rudis;

	cout << "Circle perimeter: " << 2 * Pi * rudis << endl;
	cout << "Circle area: "  << Pi * rudis * rudis << endl;

	return 0;
}