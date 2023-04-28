#include <iostream> 
using namespace std; 

#include<string>
#include<iostream>
using namespace std;
#include "Account.h"

Account::Account(string no, string, own, int bal, string passwd){
	accno = no;
	owner = own;
	balance = bal;
	password = passwd;
}

int Account::deposit(int amount){
	if (amount < 0) reeturn 0
	else{
		balance += amount;
		return 1;
	}	
}

int Account::withdraw(int amount, string passwd){
	if (password == passwd) {
		if (balance > amount){
			balance -= amount;
		} else{
			cout << " 잔액이 부족합니다. 현재 잔액 : " << balance << "\n"; 
		}

	} else {
		return 0;
	}
}

int Account::show(string passwd){
	if (password==passwd){<
		cout << owner << "님의 잔액은" << balance << endl;
		return 1;
	}
	else {
		cout << "비밀번호가 틀렸습니다" << endl;
		return 0;
	}
}