#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

GradeBook::GradeBook(string courseName,string instructorName){
    setCourseName(courseName);
    setInstructorName(instructorName);
}
void GradeBook::setCourseName(string name){
    courseName = name;
}
string GradeBook::getCourseName(){
    return courseName;
}
void GradeBook::setInstructorName(string name){
    instructorName = name;
}
string GradeBook::getInstructorName(){
    return instructorName;
}
void GradeBook::displayMessage(){
    cout << "Welcome to the grade book for\n" <<getCourseName()<<"!"<<endl;
    cout << "This course is present by "<< getInstructorName() << "!" << endl;
}
