#include "Account.h"
#include <iostream>
using namespace std;
Account::Account(int amount){
    if(amount >0)
        balance=amount;
    else{
        balance = 0;
        cerr<< "inital balance should be greater than 0"<<endl;
    }
}
void Account::credit(int amount){
    if(amount >0){
        balance += amount;
    }
}
void Account::debit(int amount){
    if(amount <= balance){
        balance -=amount;
    }else{
        cerr << "Debit amount exceeded account balance" << endl;
    }
}
int Account::getBalance(){
    return balance;
}
