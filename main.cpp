#include "Account.h"
#include <iostream>
#include <cstring>

using namespace std;

Account::Account(const Account &ref):accountID(ref.accountID),balance(ref.balance) {//복사 생성자
    namePtr=new char [strlen(ref.namePtr)+1]; //널문자 자리 하나
    strcpy(namePtr,ref.namePtr);// 깊은 복사
}
Account::Account(int ID, int money, char *name): accountID(ID),balance(money) {// 생성자
    namePtr=new char [strlen(name)+1]; //널문자 자리 하나
    strcpy(namePtr,name);// 깊은 복사
}

int Account::GetAccID() const {
    return this->accountID;
}

int main(void) {
  int choice;

  while (1) {
    ShowMenu();
    cout << "선택: ";
    cin >> choice;
    cout << endl;

    switch (choice) {
    case MAKE:
      MakeAccount();
      break;
    case DEPOSIT:
      DepositMoney();
      break;
    case WITHDRAW:
      WithdrawMoney();
      break;
    case INQUIRE:
      ShowAllAccInfo();
      break;
    case EXIT:
      return 0;
    default:
      cout << "Illegal selection.." << endl;
    }

    return 0;
  }
}