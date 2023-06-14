// 6�� ����
#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	// s1�� s2�� ������ ���ο� �迭�� ���� �����ϰ� ������ ����
	static int* concat(int s1[], int s2[], int size) {
		int* s3 = new int[size * 2];
		for (int i = 0; i < size; i++) {
			s3[i] = s1[i];
		}
		for (int i = 0; i < size; i++) {
			s3[i + size] = s2[i];
		}
		return s3;
	}
	// s1���� s2�� �ִ� ���ڸ� ��� ������ ���ο� �迭�� ���� �����Ͽ� ����
	// �����ϴ� �迭�� ũ��� retSize�� ����.
	// retSize�� 0�� ��� NULL ����
	static int* remove(int s1[], int s2[], int size, int& retSize) {
		int* s3 = new int[size];
		int count = 0;
		for (int i = 0; i < size; i++) {
			bool b = false;
			for (int j = 0; j < size; j++) {
				if (s1[i] == s2[j]) b = true;
			}
			if (!b) {
				s3[count] = s1[i];
				count++;
			}
		}
		if (count == 0) retSize = NULL;
		else retSize = count;
		return s3;
	}

};



int main() {
	int x[5], y[5];
	int* concat;
	int* remove;
	int retSize;

	cout << "������ 5�� �Է��϶�. �迭 x�� �����Ѵ� >> ";
	for (int i = 0; i < 5; i++) {
		int n;
		cin >> n;
		x[i] = n;
	}
	cout << "������ 5�� �Է��϶�. �迭 y�� �����Ѵ� >> ";
	for (int i = 0; i < 5; i++) {
		int n;
		cin >> n;
		y[i] = n;
	}
	concat = ArrayUtility2::concat(x, y, 5);
	remove = ArrayUtility2::remove(x, y, 5, retSize);

	cout << "��ģ ���� �迭�� ��� : ";
	for (int i = 0; i < 10; i++) {
		cout << concat[i] << ' ';
	}
	cout << endl;
	cout << "�迭 x[]���� y[]�� �� ����� ��� : ";
	if (retSize == NULL) cout << "����";
	else {
		cout << "������ " << retSize << ", ";
		for (int i = 0; i < retSize; i++) {
			cout << remove[i] << ' ';
		}
	}
	cout << endl;
}
