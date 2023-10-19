#include<iostream>
using namespace std;

void incrementDoublePointer(int ** p){
    p = p + 1;
}

void incrementPointer(int ** p){
    *p = *p +1;
}

void increment(int ** p){
    **p = **p + 1;
}

int main() {
    int i = 10;
    int * ptr = &i;
    int ** pptr = &ptr;

    //Address
    cout<<"Address"<<endl; 
    cout<<"&ptr     = "<<&ptr<<endl;
    cout<<"pptr     = "<<pptr<<endl<<endl;

    //Dereference
    cout<<"Dereference"<<endl; 
    cout<<"i        = "<<i<<endl;
    cout<<"*ptr     = "<<*ptr<<endl;
    cout<<"**pptr   = "<<**pptr<<endl<<endl;

    cout<<"&i       = "<<&i<<endl;
    cout<<"ptr      = "<<ptr<<endl;
    cout<<"*pptr    = "<<*pptr<<endl<<endl;

    //Pointer manipulation
    cout<<"Pointer manipulation"<<endl;

    cout<<"before, pptr     = "<<pptr<<endl;
    cout<<"calling incrementDoublePointer(pptr);"<<endl;
    incrementDoublePointer(pptr);
    cout<<"after, pptr      = "<<pptr<<endl<<endl;

    cout<<"before, *pptr    = "<<*pptr<<endl;
    cout<<"calling incrementPointer(pptr);"<<endl;
    incrementPointer(pptr);
    cout<<"after, *pptr     = "<<*pptr<<endl<<endl;

    *pptr = &i;
    cout<<"before, **pptr   = "<<**pptr<<endl;
    cout<<"calling increment(pptr);"<<endl;
    increment(pptr);
    cout<<"after, **pptr    = "<<**pptr<<endl;

    return 0;
}
