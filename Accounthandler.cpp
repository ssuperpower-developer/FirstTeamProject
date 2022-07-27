#include "AccountHandler.h"
#include "Account.h"
#include <iostream>

using namespace std;



void AccountHandler::WithdrawMoney(void) {
  int money;
  int id;
  cout << "[출   금]" << endl;
  cout << "계좌 ID : ";
  cin >> id;
  cout << "출금액 : ";
  cin >> money;

  for (int i = 0; i < accNum; i++) {
    if (accArr[i]->GetAccID() == id) {
      if (accArr[i]->Withdraw(money) < 0) {
        cout << "잔액이 부족합니다." << endl;
        return;
      }
    }
    cout << "출금 완료" << endl;
  }
  cout << "유효하지 않은 ID 입니다" << endl;
  return;
}

//최지우
void AccountHandler::ShowAllAccInfo() const {
  for (int i = 0; i < accNum; i++) {
    accArr[i]->ShowAccInfo();
    cout << endl;
  }
}

AccountHandler::~AccountHandler() {
  for (int i = 0; i < accNum; i++) {
    delete accArr[i];
  }
}

//이정훈

void AccountHandler::ShowMenu() const {
    //MAKE DEPOSIT WITHDRAW INQUIRE EXIT
    cout << "메뉴를 선택하십시오." << endl;
    cout << "1. 계좌 만들기를 하려면 MAKE를 입력하세요" << endl;
    cout << "2. 예금을 하려면  DEPOSIT를 입력하세요" << endl;
    cout << "3. 출금을 하려면  WITHDRAW를 입력하세요" << endl;
    cout << "4. 계좌정보를 확인하려면 INQUIRE를 입력하세요" << endl;
    cout << "5. 종료하시려면 EXIT를 입력하세요" << endl;
    cout << "입력 :";
}

void AccountHandler::MakeAccount() {
    cout << "계좌를 생성합니다" << endl;
    cout << "ID, 잔액, 이름을 차례대로 입력해주세요 :";

    int id = 0;
    int money = 0;
    char name[50];

    cin >> id >> money >> name;

    AccountHandler::accArr[accNum++] = new Account(id, money, name);
}
