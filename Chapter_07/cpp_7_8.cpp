#include <iostream>
using namespace std;

void displayArray(int numbers[], int length);
void displayArray(char chars[], int length);

int main()
{
	char chars[] = {'h', 'e', 'l'};
	int numbers[] = {1, 2, 3};
	displayArray(chars, 3);
	displayArray(numbers, 3);
	return 0;
}

void displayArray(int numbers[], int length)
{
	for (int i = 0; i < length; ++i)
	{
		cout << numbers[i] << endl;
	}
}

void displayArray(char chars[], int length)
{
	for (int i = 0; i < length; ++i)
	{
		cout << chars[i] << endl;
	}
}