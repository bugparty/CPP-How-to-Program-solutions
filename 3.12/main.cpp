#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
    Account a1(-1),a2(10);
    a1.debit(10);
    a1.credit(20);
    cout << "a1 balance "<<a1.getBalance()<<endl;
    a2.debit(2);
    cout << "a2 balance "<<a2.getBalance()<<endl;

    return 0;
}
