// 3번 문제
#include <iostream>
using namespace std;

int big(int a, int b, int max = 100) {
	if (a > b) {
		if (a >= max) return max;
		else return a;
	}
	else {
		if (b > max) return max;
		else return b;
	}
}



int main() {
	// 3과 5중 큰 값 5는 최대값 100보다 작으므로, 5 리턴
	int x = big(3, 5);
	// 300과 60중 큰 값 300이 최대값 100보다 크므로, 100 리턴
	int y = big(300, 60);
	// 30과 60중 큰 값 60이 최대값 50보다 크므로, 50 리턴
	int z = big(30, 60, 50);

	cout << x << ' ' << y << ' ' << z << endl;
}
