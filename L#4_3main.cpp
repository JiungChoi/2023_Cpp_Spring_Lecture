#include <iostream> 
using namespace std; 

#include "Account.h"

int main() {
	Account acc("1234-1234", "최지웅", 100000, "1234");
	Account acc2("4321-4321", "두배만", 200000, "4321");
	acc1.deposit(5000);
	acc2.withdraw(5000, "4321");

	acc1.show("1234");
	acc2.show("4321");

	return 0;
}