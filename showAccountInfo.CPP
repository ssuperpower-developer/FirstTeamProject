#include<iostream>
#include "Account.h"
#using namespace std;

void Account::showAccountInfo() const{
    cout<<"계좌 : "<<accountID<<endl;
	cout<<"잔액 : "<<balance<<endl;
    cout<<"이름 : "<<cusName<<endl;
} 