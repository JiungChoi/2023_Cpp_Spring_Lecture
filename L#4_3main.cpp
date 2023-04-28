#include<iostream>
#include"Account.h"
using namespace std;

int main()
{
	Account acc1("1234-1234", "장용훈", 100000, "1234");
	Account acc2("4321-4321", "김철수", 200000, "4321");
	acc1.deposit(50000);
	acc2.withdraw(50000, "4321");

	acc1.transfer(&acc2, 10000, "1234");

	acc1.show("1234");
	acc2.show("4321");

	return 0;
}