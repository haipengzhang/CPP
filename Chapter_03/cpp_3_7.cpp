#include <iostream>
using namespace std;

// c++ 11编译的时候就会把常量表达式算好,而不是等到运行的时候
constexpr double GetPi() {return 22.0 / 7};
constexpr double TwicePi() {return 2 * GetPi()};

enum CardinalDirection
{
	North = 25,
	South,
	East,
	West
};

int main()
{
	cout << "Display directions and their symbolic values" << endl;
	cout << "North: " << North << endl;
	cout << "South: " << South << endl;
	cout << "East: " << East << endl;
	cout << "West: " << West << endl;

	CardinalDirection windDirection = South;
	cout << "Varible windDirection: " << windDirection << endl;

	return 0;
}
