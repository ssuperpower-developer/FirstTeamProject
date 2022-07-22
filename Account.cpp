#include "Account.h"
#include <cstring>
#include <iostream>

using namespace std;

// 김현수
Account::Account(const Account &ref)
    : accountID(ref.accountID), balance(ref.balance) { //복사 생성자
  cusName = new char[strlen(ref.cusName) + 1];         //널문자 자리 하나
  strcpy(cusName, ref.cusName);                        // 깊은 복사
}
Account::Account(int ID, int money, char *name)
    : accountID(ID), balance(money) {   // 생성자
  cusName = new char[strlen(name) + 1]; //널문자 자리 하나
  strcpy(cusName, name);                // 깊은 복사
}

int Account::GetAccID() const { return this->accountID; }

// 최지우
void Account::Deposit(int money) { balance += money; }

// 김지은
int Account::Withdraw(int money) {
  static string str[50] = "잔액이 부족합니다";

  if (balance < money) { //잔액<출금액
    cout << str << endl;
  }
  if (balance == money) {
    return 0; //잔액=출금액 일시 0 반환
  }
  balance -= money;
  return money;
}

// 유진
void Account::ShowAccInfo() const {
  cout << "계좌 : " << accountID << endl;
  cout << "잔액 : " << balance << endl;
  cout << "이름 : " << cusName << endl;
}