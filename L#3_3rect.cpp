#include<iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;

	Rectangle();
	Rectangle(int wh);
	Rectangle(int w, int h);
	double getArea();
	bool isSquare();
};

Rectangle::Rectangle() : Rectangle(0, 0) { }

Rectangle::Rectangle(int wh) {
	width = height = wh;
}

Rectangle::Rectangle(int w, int h) {
	width = w; height = h;
}

double Rectangle::getArea() {
	return width * height;
}

bool Rectangle::isSquare() {
	if (width == height)
		return true;
	else
		return false;
}

int main() {
	Rectangle rect1;
	rect1.width = 5;
	rect1.height = 5;
	cout << "사각형의 면적은 " << rect1.getArea() << endl;

	Rectangle rect2;
	Rectangle rect3(3, 5);
	Rectangle rect4(3);
	
	if (rect1.isSquare()) cout << "rect1는 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;
	if (rect4.isSquare()) cout << "rect4는 정사각형이다." << endl;

	return 0;
}
