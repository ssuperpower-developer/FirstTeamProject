#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

class Account {
private:
  int accountID;
  int balance;
  char *cusName;  //깊은복사 포인터를 받아야해서 포인터로 생성

public:
  Account(int ID, int money, char *name);
  Account(const Account &ref);

  int GetAccID() const;
  void Deposit(int money);
  int Withdraw(int money);
  void ShowAccInfo() const;
  ~Account();
};

class AccountHandler {
private:
  Account *accArr[100];
  int accNum;

public:
  AccountHandler();
  void ShowMenu(void) const;
  void MakeAccount(void);
  void DepositMoney(void);
  void WithdrawMoney(void);
  void ShowAllAccInfo(void) const;
  ~AccountHandler();
};

#endif