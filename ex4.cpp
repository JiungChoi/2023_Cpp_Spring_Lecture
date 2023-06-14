// 4�� ����
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
// �Ű� ������ ���� ��� �迭 100�� ���� �� 0���� �ʱ�ȭ
/*
MyVector::MyVector() {
	mem = new int[100];
	size = 100;
	for (int i = 0; i < size; i++) mem[i] = 0;
}
*/


// �Ű� ������ ������� �迭 n�� ���� �� val�� �ʱ�ȭ
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