#include <iostream>
using namespace std;

#include "studentAndConstructor.cpp"
/*
class Student{
    int rollNumber;
    int age;
};
*/

int main(){
    //Statically
    int a;
    cout<<"Creating Objects Statically"<<endl;
    Student s1;
    Student s2;
    Student s3, s4, s5;
    
    s1.setAge(24);
    s1.rollNumber = 101;
    cout<<"s1.getAge() = "<<s1.getAge()<<endl;
    cout<<"s1.rollNumber = "<<s1.rollNumber<<endl<<endl;
    cout<<"s1.display()"<<endl;
    s1.display();
    cout<<endl<<endl;

    //Dynamically
    int * ptr = new int;
    cout<<"Creating Objects Dynamically"<<endl;
    Student * sptr1 = new Student();
    /*
    (*sptr).age = 20;
    (*sptr).rollNumber = 100;
    cout<<"(*sptr).age = "<<(*sptr).age<<endl;
    cout<<"(*sptr).rollNumber = "<<(*sptr).rollNumber<<endl;
    (*sptr).display(); 
    */
    sptr1->setAge(20);
    sptr1->rollNumber = 100;
    cout<<"sptr1->getAge() = "<<sptr1->getAge()<<endl;
    cout<<"sptr1->rollNumber = "<<sptr1->rollNumber<<endl<<endl;
    cout<<"sptr1->display()"<<endl;
    sptr1->display();
    cout<<endl<<endl;


    //Parameterized Constructor
    cout<<"Parameterized Constructor Demo"<<endl;
    cout<<endl;

    cout<<"Statically"<<endl;
    Student s6(102);
    cout<<"Address of s6: "<<&s6<<endl;
    s6.display();

    cout<<endl<<"Dynamically"<<endl;
    Student * sptr2 = new Student(103);
    sptr2->display();
    cout<<endl;
    Student * sptr3 = new Student(22,104);
    sptr3->display();
    cout<<endl<<endl;


    //Copy Constructor
    cout<<"Copy Constructor Demo"<<endl;
    cout<<endl;

    cout<<"Statically"<<endl;
    Student s7(22,105);
    cout<<"s7 : {"<<endl;
    s7.display();
    cout<<"}"<<endl;
    Student s8(s7);
    cout<<"s8 : {"<<endl;
    s8.display();
    cout<<"}"<<endl<<endl;

    cout<<"Dynamically"<<endl;
    Student * sptr4 = new Student(20,106);
    cout<<"sptr4 : {"<<endl;
    sptr4->display();
    cout<<"}"<<endl;
    Student s9(*sptr4);
    Student * sptr5 = new Student(*sptr4);
    cout<<"sptr5 : {"<<endl;
    sptr5->display();
    cout<<"}"<<endl;
    Student * sptr6 = new Student(s7);
    cout<<endl;


    //Copy Assignment Operator
    s1 = s7;
    *sptr1 = s7;
    s7 = *sptr5;


    //Destructor
    cout<<endl<<"Destructor Demo"<<endl;
    /*
    In C++, the 'delete' operator is used to deallocate memory that was allocated using the 'new' operator. It's important to note that 'delete' itself does not directly call the destructor of the object. 
    Instead, it is used to free the memory associated with the object. However, before the memory is deallocated, the destructor of the object is called explicitly if it is a dynamically allocated object.
    */

    cout<<endl<<"Dynamic"<<endl;
    //Using delete to free the dynamically allocated memory
    cout<<"delete sptr1 : ";
    delete sptr1;
    cout<<"delete sptr2 : ";
    delete sptr2;
    cout<<"delete sptr3 : ";
    delete sptr3;
    cout<<"delete sptr4 : ";
    delete sptr4;
    cout<<"delete sptr5 : ";
    delete sptr5;

    cout<<"Static"<<endl;
    //For objects with static allocation (i.e., objects created on the stack), the destructor is called automatically when the object goes out of scope. 
    //The C++ language ensures that the destructor is invoked for local variables when they reach the end of their scope.
    return 0;
}
