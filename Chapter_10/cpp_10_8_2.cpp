#include <iostream>
using namespace std;

// 形状有圆、方、多边形、三角形
class Shape {
public:
	double cacuArea() {
		cout << "Shape area called! " << endl;
		return 0;
	}
	double cacuPerimeter() {
		cout << "Shape perimeter called! " << endl;
		return 0;
	}
};

class Polygon : public Shape {
private:
	int numberOfLine;
public:
	Polygon(int inputNumberOfLine) {
		numberOfLine = inputNumberOfLine;
	};
	void Dec() {
		cout << "Shape has " << numberOfLine << " lines" << endl;
	}
};

class Triangle : public Polygon {
public:
	Triangle() : Polygon(3) {};
};

int main() {
	Triangle triangle;
	Polygon polygon(5);
	triangle.Dec();
	triangle.cacuArea();
	polygon.cacuArea();
	return 0;
}