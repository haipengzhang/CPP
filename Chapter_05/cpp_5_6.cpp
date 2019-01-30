#include <iostream>
using namespace std;

int main()
{
	cout << "Use boolean value(0 / 1) to answer the question" << endl;
	cout << "Is it raining? ";
	bool raining = false;
	cin >> raining;

	cout << "Do you have buses on the streets? ";
	bool buses = false;
	cin >> buses;

	if (raining && !buses) {
		cout << "You cannot go to work" << endl;
	} else {
		cout << "You can go to work" << endl;
	}

	if (raining && buses) {
		cout << "Take an umbrella" << endl;
	}

	if (!raining && buses) {
		cout << "Enjoy the sun and have a nice day" << endl;
	}

	return 0;
}