#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    Employee e1("bowman","han",123);
    Employee e2("lee","yanhong",-123);
    cout << e1.getFirstName() << " " << e1.getLastName() << " " << e1.getSalary()<<endl;
    e1.setSalary(e1.getSalary()*1.1);
    cout << e1.getFirstName() << " " << e1.getLastName() << " " << e1.getSalary()<<endl;
    return 0;
}
