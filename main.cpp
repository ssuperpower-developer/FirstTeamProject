#include "Account.h"
#include <cstring>
#include <iostream>

using namespace std;

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