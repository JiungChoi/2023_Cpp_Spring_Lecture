// 7�� ����
#include <iostream>
using namespace std;

class Random {
public:
	// �׻� �ٸ� ������ �߻���Ű�� ���� seed�� �����ϴ� �Լ�
	static void seed() { srand((unsigned)time(0)); }
	static int nextInt(int min = 0, int max = 32767);
	static char nextAlphabet();
	static double nextDouble();
};

// ������ ���� ���� �Լ�
int Random::nextInt(int min, int max) {
    // ������ ������ min ~ max ��ŭ ����
    int r = rand() % (max - min + 1) + min;
    return r;
}

// ������ ���� ���� �Լ�
char Random::nextAlphabet() {
    // �빮�ڿ� �ҹ��� �߿� �������� ����
    char c = rand() % 2;
    // �빮�� (�ƽ�Ű �ڵ�ǥ���� 65(A) ~ 90(Z))
    if (c == 0) {
        c = (rand() % 26) + 65;
        return c;
    }
    // �ҹ��� (�ƽ�Ű �ڵ�ǥ���� 97(a) ~ 122(z)
    else
    {
        c = (rand() % 26) + 97;
        return c;
    }

}

// �Ǽ��� ���� ���� �Լ�
double Random::nextDouble() {
    // ������ ������ 0 ~ 1 ��ŭ ����
    double d = rand() / (double)(RAND_MAX + 1);
    return d;
}



int main() {
    Random::seed();
    cout << "1���� 100���� ������ ���� 10���� ����մϴ�" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << Random::nextInt(3, 5) << ' ';
    }
    cout << endl;
    cout << "���ĺ��� �����ϰ� 10���� ����մϴ�" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << Random::nextAlphabet() << ' ';
    }
    cout << endl;
    cout << "������ �Ǽ��� 10���� ����մϴ�" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << Random::nextDouble() << ' ';
    }
    cout << endl;
    for (int i = 0; i < 5; ++i) {
        cout << Random::nextDouble() << ' ';
    }
    cout << endl;
}
