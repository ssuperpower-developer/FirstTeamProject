#include "Account.h"
#include <iostream>
#include <string.h>

using namespace std;

// 최지웅 코멘트
// 문법적인 오류가 많은데, 코멘트와 수정 없이 merge 된 점 지적합니다.

//출금액 반환, 부족시 0 반환
int Withdraw(int money) {
  /*
  int account;
  cout<<"[출금]"<<endl;
  cout<<"계좌번호를 입력하세요";
  cin>>account;
  cout<<"출금액";
  cin>>money;
  */
  if (balance < money) { //잔액<돈
    return 0;
  }
  balance -= money;
  return money;
}