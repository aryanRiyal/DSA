#include<iostream>
using namespace std;

void print(int * p){
    cout<<"Inside function print, p = "<<*p<<endl<<endl;
}

void incrementPointer(int * p){
    p+=1;
}

void increment(int * p){
    (*p)++;
}

int main() {
    int i = 10;
    int * p = &i;
    print(p);

    cout<<"Before calling incrementPointer(),   p = "<<p<<endl;
    incrementPointer(p);
    cout<<"After calling incrementPointer(),    p = "<<p<<endl<<endl;

    cout<<"Before calling increment(),   *p = "<<*p<<endl;
    increment(p);
    cout<<"After calling increment(),    *p = "<<*p<<endl;

    return 0;
}
