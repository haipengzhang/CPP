#include <iostream>
using namespace std;

int main()
{
	const int Max_Rows = 3;
	const int Max_Cols = 4;

	int myInts[Max_Rows][Max_Cols] = {{34, -1, 879, 22},
										{24, 365, -101, -1},
										{-20, 40, 90, 97}
									};

	for (int row = 0; row < Max_Rows; ++row) {
		for (int col = 0; col < Max_Cols; ++col) {
			cout << "Integer[" << row << "][" << col << "] = " <<  myInts[row][col] << endl;
		}
	}
	return 0;
}