#include <iostream>
#include "invoice.h"
using namespace std;

int main()
{
    Invoice i1("part","desc", 1, 2),i2("123", "123 item", -1, -2);
    cout << i1.getDescription() <<" "<< i1.getPart() <<" "<< i1.getPrice() << " "<<i1.getQualtity() << " "<<i1.getInvoiceAmount()<<endl;
    i1.setDescription("1234");
    i1.setPart("baidu");
    i1.setPrice(123);
    i1.setQualtity(11);
    cout << i1.getDescription() << " "<<i1.getPart() <<" "<< i1.getPrice() <<" "<< i1.getQualtity() << " "<<i1.getInvoiceAmount()<<endl;
    cout << i2.getDescription() << " "<<i2.getPart() <<" "<< i2.getPrice() <<" "<< i2.getQualtity() << " "<<i2.getInvoiceAmount()<<endl;
    return 0;
}
