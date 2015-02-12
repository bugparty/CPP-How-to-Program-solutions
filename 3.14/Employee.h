#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include <string>
using std::string;
class Employee{
public:
    Employee(string, string, int);
    string getFirstName();
    string getLastName();
    void setFirstName(string);
    void setLastName(string);
    int getSalary();
    void setSalary(int);

private:
    string first,last;
    int monthSalary;
};


#endif // EMPLOYEE_H_INCLUDED
