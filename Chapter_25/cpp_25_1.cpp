#include <bitset>
#include <iostream>
#include <string>

int main() {
	using namespace std;

	bitset<4> fourBits;	// init with 0000
	cout << "Initial contents of fourBits: " << fourBits << endl;

	bitset<5> fiveBits("10101");
	cout << "Initial contents of fiveBits: " << fiveBits << endl;

	bitset<8> eightbits(255);
	cout << "Initial contents of eightbits: " << eightbits << endl;

	bitset<8> eightbitscopy(eightbits);

	return 0;
}