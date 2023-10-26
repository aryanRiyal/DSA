#include<iostream>
using namespace std;

void ref(int const & r){
    //r++;        //(error: increment of read-only reference ‘r’)
}

void pointer(int const * p){
    //(*p)++;     //(error: increment of read-only location ‘*p’)
}

int main(){
    int const i = 10;
    int const * p = &i;
    cout<<"*p   = "<<*p<<endl;
    cout<<"(Only way to have a pointer to a const variable is to also make it read-only)"<<endl<<endl;

    int i2 = 11;
    int const * p2 = &i2;
    cout<<"*p2  = "<<*p2<<endl;
    i2++;
    cout<<"*p2  = "<<*p2<<endl;
    cout<<"(The path is read-only but we can still directly change the variable)"<<endl<<endl;

    cout<<"Types of constant pointers:  ";
    int a = 10;
    int b = 20;

    cout<<"read the initialization of const pointers backwards to understand the type,"<<endl;
    cout<<"for ex: int const * ptr is a pointer ptr to a constant int, int * const ptr2 is a const pointer ptr2 to a int variable."<<endl<<endl;

    cout<<"1. pointer to a read-only variable"<<endl;
    int const * ptr = &a;
    ptr = &b;
    //(*ptr)++;
    cout<<"*ptr     = "<<*ptr<<endl<<endl;

    cout<<"2. read-only pointer to a variable"<<endl;
    int * const ptr2 = &a;
    (*ptr2)++;
    //ptr2 = &b;
    cout<<"*ptr2    = "<<*ptr2<<endl<<endl;

    cout<<"3. read-only pointer to a read-only variable"<<endl;
    int const * const ptr3 = &a;
    //(*ptr3)++;
    //ptr3 = &b;
    cout<<"*ptr3    = "<<*ptr3<<endl;

    //Uses of const pointers
    int j = 100;
    int * p3 = &j;
    pointer(p3);
    ref(j);

    return 0;
}
