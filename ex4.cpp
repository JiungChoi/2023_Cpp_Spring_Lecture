// 4번 문제
#include <iostream>
using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	MyVector(int n, int val);
	~MyVector() { delete[] mem; }
	void show();
};

MyVector::MyVector(int n = 100, int val = 0) {
	mem = new int[n];
	size = n;
	for (int i = 0; i < size; i++) {
		mem[i] = val;
	}
}

void MyVector::show() {
	for (int i = 0; i < size; i++) {
		cout << mem[i] << ' ';
	}
	cout << endl;
}
// 매개 변수가 없을 경우 배열 100개 생성 및 0으로 초기화
/*
MyVector::MyVector() {
	mem = new int[100];
	size = 100;
	for (int i = 0; i < size; i++) mem[i] = 0;
}
*/


// 매개 변수가 있을경우 배열 n개 생성 및 val로 초기화
/*
MyVector::MyVector(int n, int val) {
	mem = new int[n];
	size = n;
	for (int i = 0; i < size; i++) mem[i] = val;
}
*/



int main() {
	MyVector v1;
	MyVector v2(10, 5);
	v1.show();
	v2.show();
}