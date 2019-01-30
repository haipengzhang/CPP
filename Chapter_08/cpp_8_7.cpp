#include <iostream>
using namespace std;

int main()
{
	// request for memory space for an int
	int *pAge = new int;

	cout << "Enter your dog's age: ";
	cin >> *pAge;

	cout << "Age " << *pAge << " is stored at " << hex << pAge << endl;

	// delete could only worked on pointer for new style
	delete pAge;

	return 0;
}