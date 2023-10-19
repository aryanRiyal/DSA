#include<iostream>
using namespace std;

int main(){

    int i = 10;
    int * ptr = &i;
    cout<<"i        - "<<i<<endl;
    cout<<"&i       - "<<&i<<endl;
    cout<<"ptr      - "<<ptr<<endl;
    cout<<"*ptr     - "<<*ptr<<endl<<endl;

    float f = 1000.22;
    float * fptr = &f;
    cout<<"f        - "<<f<<endl;
    cout<<"fptr     - "<<fptr<<endl;
    cout<<"*fptr    - "<<*fptr<<endl<<endl;

    double d = 1009.9809;
    double * dptr = &d;
    cout<<"d        - "<<d<<endl;
    cout<<"dptr     - "<<dptr<<endl;
    cout<<"*dptr    - "<<*dptr<<endl<<endl;

    /*
     * Symbol Table 
     * In C++ programming and many other programming languages, a symbol table is a data structure used by the compiler to manage and store information about various program symbols, such as variables, functions, classes, and other identifiers. The symbol table helps the compiler keep track of the program's symbol names, data types, memory locations, and other attributes during the various phases of compilation, including parsing, type checking, and code generation.
    */

    //pointer size
    cout<<"sizeof(i)    - "<<sizeof(i)<<endl;
    cout<<"sizeof(f)    - "<<sizeof(f)<<endl;
    cout<<"sizeof(d)    - "<<sizeof(d)<<endl; 
    cout<<"sizeof(ptr)  - "<<sizeof(ptr)<<endl;
    cout<<"sizeof(fptr) - "<<sizeof(fptr)<<endl;
    cout<<"sizeof(dptr) - "<<sizeof(dptr)<<endl; 
}
