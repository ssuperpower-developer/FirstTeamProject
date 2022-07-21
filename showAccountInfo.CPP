#include "Account.h"
#include <iostream>

// 최지웅 코멘트
// 코드작성자는 에러가 있음에도 불구하고 확인하지 않은 점 지적합니다.
// 다른 협업하는 사람들은 문제가 있음에도 불구하고 지적하지 않은 점, 일방적으로
// merge 한 점 지적합니다.
#using namespace std;

void Account::showAccountInfo() const {
  cout << "계좌 : " << accountID << endl;
  cout << "잔액 : " << balance << endl;
  cout << "이름 : " << cusName << endl;
}