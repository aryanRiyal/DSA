#include<iostream>
using namespace std;

int main() {

    int i;
    cout<<"i = "<<i<<endl;

    i++;
    cout<<"i++ = "<<i<<endl;

    //Rookie Mistake
    int * ptr;
    cout<<"ptr = "<<ptr<<endl;
    cout<<"*ptr = "<<*ptr<<endl;

    (*ptr)++;
    //garbage pointer pointing towards a garbage value and changing it
    cout<<"(*ptr)++ = "<<*ptr<<endl;

    //Prevention is better than cure 
    int * nptr = NULL;
    cout<<"nptr = "<<nptr<<endl;
    cout<<"*nptr = "<<*nptr<<endl;

    (*nptr)++;
    cout<<"(*nptr)++ = "<<*nptr<<endl;
}
