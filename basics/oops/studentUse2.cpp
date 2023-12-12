#include <iostream>
using namespace std;

#include "studentAndConstructor.cpp"

int main(){
    Student s1;             //Constructor called

    Student s2(101);        //Parameterized Constructor (1) called

    Student s3(20, 102);    //Parameterized Constructor (2) called

    Student s4(s3);         //Copy Constructor called

    s1 = s2;                //Copy Assignment operator

    Student s5 = s4;        //Copy Constructor called

    return 0;
}
