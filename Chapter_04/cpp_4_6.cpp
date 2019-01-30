#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a word not longer then 20 charactors: " << endl;

	char userInput[21] = {'\0'};
	cin >> userInput;

	cout << "Length of your input was: " << strlen(userInput) << endl;
	return 0;
}