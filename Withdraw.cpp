#include <iostream>
#include <string.h>
#include "Account.h"
using namespace std;

//출금액 반환, 부족시 0 반환
int Account::Withdraw(int money){
        
    if(balance<money){    //잔액<출금액-> 잔액 부족
         return -1;
    }

    else if(balance==money){
        return 0;         //잔액=출금액 
    }

    else{
        balance-=money;   //잔액>출금액    잔액=잔액-출금액
        return balance;
    }
}