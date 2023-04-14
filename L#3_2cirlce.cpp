#include<iostream>
using namespace std;

class Circle {
public:
	int radius;
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	donut.radius = 1; //donut 객체의 반지름을 1으로 설정
	double area = donut.getArea(); // donut 객체의 면적 알아내기
	cout << "donut 면적은 " << area << endl;

	Circle pizza;
	donut.radius = 30; // pizza 객체의 반지름을 1으로 설정
	area = donut.getArea(); // pizza 객체의 면적 알아내기
	cout << "pizza 면적은 " << area << endl;


	

	return 0;
}
