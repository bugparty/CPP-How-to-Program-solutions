#include "Employee.h"

Employee::Employee(string first,string last,int monthSalary){
    setFirstName(first);
    setLastName(last);
    setSalary(monthSalary);
    }
void Employee::setFirstName(string first){
    this->first = first;
}
void Employee::setLastName(string last){
    this->last = last;
}
void Employee::setSalary(int salary){
    if(salary>0)
        monthSalary = salary;
    else{
        monthSalary = 0;
    }
}
string Employee::getFirstName(){
    return first;
}
string Employee::getLastName(){
    return last;
}
int Employee::getSalary(){
    return monthSalary;
}

