#include <iostream>
#include <string.h>
#include "Account.h"
using namespace std;

//출금액 반환, 부족시 0 반환
int Withdraw(int money){
    /*
    int account;
    cout<<"[출금]"<<endl;
    cout<<"계좌번호를 입력하세요";
    cin>>account;
    cout<<"출금액";
    cin>>money;
    */
    if(balance<money){    //잔액<돈
        return 0;
    }
    balance-=money;
    return money;
}