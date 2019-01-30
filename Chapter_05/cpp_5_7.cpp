#include <iostream>
using namespace std;

int main()
{
	cout << "Answer questions with 0 or 1" << endl;
	cout << "Is there a deep discount on your favorite car?";
	bool discount = false;
	cin >> discount;

	cout << "Do you get a fantastic bonus? ";
	bool fantasticBonus = false;
	cin >> fantasticBonus;

	if (discount || fantasticBonus) {
		cout << "Congratulations, you can buy that car!" << endl;
	} else {
		cout << "Sorry, waiting a while is a good idea" << endl;
	}
	
	return 0;
}