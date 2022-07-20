#include <iostream>
#include <cstring>
#include "Account.h"
Account::Account(const Account &ref):accountID(ref.accountID),balance(ref.balance) {//복사 생성자
    cusName=new char [strlen(ref.cusName)+1]; //널문자 자리 하나
    strcpy(cusName,ref.cusName);// 깊은 복사
}
Account::Account(int ID, int money, char *name): accountID(ID),balance(money) {// 생성자
    cusName=new char [strlen(name)+1]; //널문자 자리 하나
    strcpy(cusName,name);// 깊은 복사
}

int Account::GetAccID() const {
    return this->accountID;
}
