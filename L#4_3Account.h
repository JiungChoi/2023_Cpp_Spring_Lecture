#ifndef ACCOUNT_H
#define ACCOUNT_H

#pragma once
#include<string>
#include<iostream>
using namespace std;

// Circle 클래스 선언
class Account {
	string accno; //계좌번호
	string owner; //예금주
	int balance; //잔액
	string password; //비밀번호
	
public:
	Account(string no, string own, int bal, string passwd);

	int deposit(int amount);								// 입금
	int withdraw(int amount, string passwd);				// 출금
	int transfer(Account acc, int amount, string passwd);	// 송금
	int show(string passwd);								// 조회
	
}; 

#endif