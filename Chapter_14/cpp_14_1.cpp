#include <iostream>
#include <string>
using namespace std;

// 预处理
#define ARRAY_LENGTH 25
#define PI 3.1416
#define MY_DOUBLE double
#define FAV_WHISKY "Jack Daniels"

int main() {
	int MyNumbers[ARRAY_LENGTH] = {0};
	cout << "Array's lenght: " << sizeof(MyNumbers) / sizeof(int) << endl;

	cout << "Enter a radius: ";
	MY_DOUBLE radius = 0;
	cin >> radius;
	cout << "Area is: " << PI * radius * radius << endl;

	string FavWhisky(FAV_WHISKY);
	cout << "My favorite drink is: " << FavWhisky << endl;

	return 0;
};