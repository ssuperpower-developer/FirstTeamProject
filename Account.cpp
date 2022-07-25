#include "Account.h"
#include <cstring>
#include <iostream>

using namespace std;

// 김현수
Account::Account(const Account &ref)
    : accountID(ref.accountID), balance(ref.balance) {   //복사 생성자
  customerName = new char[strlen(ref.customerName) + 1]; //널문자 자리 하나
  strcpy(customerName, ref.customerName);                // 깊은 복사
}
Account::Account(int ID, int money, char *name)
    : accountID(ID), balance(money) {        // 생성자
  customerName = new char[strlen(name) + 1]; //널문자 자리 하나
  strcpy(customerName, name);                // 깊은 복사
}

int Account::GetAccID() const { return this->accountID; }

// 최지우
void Account::Deposit(int money) { balance += money; }

// 김지은
int Account::Withdraw(int money) {
  if (balance < money) { //잔액<출금액
    return -1;
  }
  if (balance == money) {
    return 0; //잔액=출금액 일시 0 반환
  }
  balance -= money;
  return balance;
}

// 유진
void Account::ShowAccInfo() const {
  cout << "계좌 : " << accountID << endl;
  cout << "잔액 : " << balance << endl;
  cout << "이름 : " << customerName << endl;
}

//이정훈
Account::~Account() {

}