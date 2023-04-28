#include "Account.h"
Account::Account(string no, string own, int bal, string passwd)
{
	accno = no;
	owner = own;
	balance = bal;
	password = passwd;
}

int Account::deposit(int amount)
{
	if (amount < 0) return 0;
	balance += amount;
	return 1;
}

int Account::withdraw(int amount, string passwd)
{
	if (password != passwd)
	{
		cout << "비밀번호가 틀렸습니다" << endl;
		return 0;
	}
	if (balance < amount)
	{
		cout << "잔액이 부족합니다" << endl;
		return 0;
	}
	balance -= amount;
	return amount;
}
int Account::show(string passwd)
{
	if (password == passwd)
	{
		cout << owner << "님의 잔액 : " << balance << endl;
		return 1;
	}
	else {
		cout << "비밀번호가 틀렸습니다" << endl;
		return 0;
	}
}

int Account::transfer(Account* acc, int amount, string passwd)
{
	int result = withdraw(amount, passwd);
	if (result == 0)
	{
		return 0;
	}
	return (*acc).deposit(result);
}