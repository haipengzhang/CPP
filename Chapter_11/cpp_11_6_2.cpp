#include <iostream>
using namespace std;

class Shape {
public:
	virtual double Area() = 0;
	virtual void Print() = 0;
	virtual ~Shape(){};
};

class Circle : public Shape {
public:
	double Area() {
		return 10;
	};
	void Print() {
		cout << "Circle Print method invoked!" << endl;
	};
};

class Triangle : public Shape {
public:
	double Area() {
		return 20;
	};
	void Print() {
		cout << "Triangle Print method invoked!" << endl;
	};
};

int main() {
	Triangle triangle;
	Circle circle;

	cout << "triangle area is " << triangle.Area() << endl;
	cout << "circle area is " << circle.Area() << endl;

	triangle.Print();
	circle.Print();

	return 0;
}
