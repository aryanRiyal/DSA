#include<iostream>
using namespace std;

int main() {
    
    int i = 10;
    int * ptr = &i;
    cout<<"let, i = "<<i<<" and *ptr = "<<*ptr<<endl<<endl;

    i++;
    cout<<"i++"<<endl;
    cout<<"after the increment"<<endl;
    cout<<"i = "<<i<<" and *ptr = "<<*ptr<<endl<<endl;

    int a = *ptr;
    cout<<"a = *ptr, so if *ptr = "<<*ptr<<", then a = "<<a<<endl;
    a++;
    cout<<"a++"<<endl;
    cout<<"after the increment"<<endl;
    cout<<"a = "<<a<<" and *ptr = "<<*ptr<<endl<<endl;

    i = 12;
    cout<<"let i = 12"<<endl;
    cout<<"so i = "<<i<<" and *ptr = "<<*ptr<<endl<<endl;

    *ptr = 23;
    cout<<"let *ptr = 23"<<endl;
    cout<<"so i = "<<i<<" and *ptr = "<<*ptr<<endl<<endl;
    
    (*ptr)++;
    cout<<"(*ptr)++"<<endl;
    cout<<"after the increment"<<endl;
    cout<<"i = "<<i<<" and *ptr = "<<*ptr<<endl;

    //Pointer Arithmetic
    int j = 100;
    int * ptrs = &j;

    double d = 102.33;
    double * dptr = &d;

    cout<<endl<<"Pointer Arithmetic"<<endl;
    cout<<"ptrs = "<<ptrs<<" and dptr = "<<dptr<<endl;
    ptrs = ptrs + 2;
    dptr = dptr + 2;
    cout<<"after increment (+2)"<<endl;
    cout<<"ptrs = "<<ptrs<<" and dptr = "<<dptr<<endl<<endl;

    cout<<"ptrs = "<<ptrs<<" and dptr = "<<dptr<<endl;
    ptrs = ptrs - 2;
    dptr = dptr - 2;
    cout<<"after decrement (-2)"<<endl;
    cout<<"ptrs = "<<ptrs<<" and dptr = "<<dptr<<endl<<endl;
}
