#include <iostream>
#include <string>
using namespace std;

int main() {
	enum rainbow_color
	{
		red = 0,
		orange,
		yellow,
		green,
		cyan,
		blue,
		purple	
	};

	int inputColor = red;
	cout << "Input one color:";
	// string inputColor;
	// getline(cin, inputColor);
	cin >> inputColor;

	switch (inputColor) {
		case red:
		cout << "color is red" << endl;
		break;
		case orange:
		cout << "color is orange" << endl;
		break;
		case yellow:
		cout << "color is yellow" << endl;
		break;
		case green:
		cout << "color is green" << endl;
		break;
		case cyan:
		cout << "color is cyan" << endl;
		break;
		case blue:
		cout << "color is blue" << endl;
		break;
		case purple:
		cout << "color is purple" << endl;
		break;
		default:
		cout << "not a rainbow color" << endl;
		break;
	}

	return 0;

}