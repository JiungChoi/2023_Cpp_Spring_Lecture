// 9�� ����
#include <iostream>
using namespace std;

class Board {
	static string text[100];
	static int count;
public:
	static void add(string text);
	static void print();
};
string Board::text[100];
int Board::count = 0;

void Board::add(string t) {
	text[count] = t;
	count++;
}
void Board::print() {
	cout << "********** �Խ����Դϴ�. **********" << endl;
	for (int i = 0; i < count; i++) {
		cout << i << ": " << text[i] << endl; 
	}
}



int main() {
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}

