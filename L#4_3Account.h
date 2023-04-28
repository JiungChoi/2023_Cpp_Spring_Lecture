#pragma once
#include<string>
#include<iostream>
using namespace std;
class Account
{
private :
	string accno; //계좌번호
	string owner; //예금주
	int balance; // 잔액
	string password; //비밀번호

public :
	Account(string no, string own, int bal, string passwd);
	int deposit(int amount);
	int withdraw(int amount, string passwd);
	int transfer(Account * acc, int amount, string passwd);
	int show(string passwd);

};
