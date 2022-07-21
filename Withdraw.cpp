#include "Account.h"
#include <iostream>
#include <string.h>

using namespace std;

//출금액 반환, 부족시 0 반환

int Account::Withdraw(int money){
        
    static string str[50]="잔액이 부족합니다";

    if(balance<money){    //잔액<출금액
         cout<<str<<endl;
    }
    if(balance==money){
        return 0;         //잔액=출금액 일시 0 반환
    }
    balance-=money;
    return money;

}