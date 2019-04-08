#include <iostream>
using namespace std;

// 异常传到链条
struct StructA
{
	StructA() {cout << "Constructed a struct A" << endl;}
	~StructA() {cout << "Destroyed a struct A" << endl;}
};

struct StructB
{
	StructB() {cout << "Constructed a struct B" << endl;}
	~StructB() {cout << "Destroyed a struct B" << endl;}
};

void FunB() {
	cout << "In Func B" << endl;
	StructA objA;
	StructB objB;
	cout << "About to throw up!" << endl;
	throw "Throwing for heck of it";
}

void FunA() {
	try {
		cout << "In Func A" << endl;
		StructA objA;
		StructB objB;
		FunB();
		cout << "FunA: returning to caller" << endl;
	} catch (char* exp) {
		cout << "FunA: Caught exception, It says: " << exp << endl;
		cout << "FunA: Handled it here, will not throw to caller" << exp << endl;
	}
}

int main() {
	cout << "main(): Started excution" << endl;
	try {
		FunA();
	} catch (char* exp) {
		cout << "Exception: " << exp << endl;
	}
	cout << "main(): exiting gracefully" << endl;

	return 0;
}


