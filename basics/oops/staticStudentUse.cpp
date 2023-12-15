#include <iostream>
using namespace std;
#include "staticStudent.cpp"

int main() {
    Student s1;
    Student s2;
    Student s3, s4, s5;

    //int answer = Student :: totalStudents;
    int answer = Student::getTotalStudent();    //now int totalStudents is private
    cout<<"Total Students = "<<answer<<endl;
    return 0;
}
