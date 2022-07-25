#include "Account.h"
#include <iostream>

using namespace std;

void AccountHandler::WithdrawMoney(void)
{
    int money;
    int id;
    cout << "[출   금]" << endl;
    cout << "계좌 ID : ";
    cin >> id;
    cout << "출금액 : ";
    cin >> money;

    for (int i = 0; i < accNum; i++)
    {
        if (accArr[i]->GetAccID() == id)
        {
            if (accArr[i]->Withdraw(money) < 0)
            {
                cout << "잔액이 부족합니다." << endl;
                return;
            }
        }
        cout << "출금 완료" << endl;
    }
    cout << "유효하지 않은 ID 입니다" << endl;
    return;
}

void AccountHandler::DepositMoney(void){
    int money;
    int id;
    cout<<"[입   금]"<<endl;
    cout<<"계좌번호 : ";
    cin>>id;
    cout<<"입금액 : ";
    cin>>money;
    for(int i=0;i<accNum;i++){
        if(accArr[i]->GetAccID() == id){
            accArr[i]->Deposit(money);
            cout<<"입금 완료"<<endl;
            return;
        }
        else    continue;
    }
    cout<<"없는 계좌번호입니다."<<endl;
    return;
}