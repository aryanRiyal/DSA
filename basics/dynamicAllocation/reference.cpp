#include<iostream>
using namespace std;

void increment(int& i){
    i++;
}

//Bad Practise
int& f(int n){
    int a = n;
    a++;
    //return a;   (error: reference to local variable ‘a’ returned)
    return a; 
}

//Bad Practise
int* f2(){
    int i = 10;
    i++;
    //return &i;  (error: address of local variable ‘i’ returned)
    return 0; 
}

int main(){

    //int * p = f2();

    int i;
    i = 10;
    int& j = i;
    cout<<"int i = 10"<<endl;
    cout<<"int& j = i"<<endl<<endl;
    //int& j;
    //j = i;    (error: ‘j’ declared as reference but not initialized)

    cout<<"before, i    = "<<i<<endl;
    cout<<"calling increment(i);"<<endl;
    increment(i);
    cout<<"after, i     = "<<i<<endl<<endl;

/*
    cout<<"before, i    = "<<i<<endl;
    cout<<"calling f(i);"<<endl;
    int& l = f(i);
    cout<<"after, l     = "<<l<<endl<<endl;
*/

    i++;
    cout<<"i++, j   = "<<j<<endl;
    j++;
    cout<<"j++, i   = "<<i<<endl<<endl;

    int k = 100;
    j = k;
    cout<<"int k    = 100;"<<endl;
    cout<<"j = k, i = "<<i<<endl<<endl;

    cout<<"To address the issues with f and f2, you should not return references or pointers to local variables with automatic storage duration. Instead, if you need to return values from functions, return them by value. If you need to modify values outside of a function, consider passing parameters by reference, as you've done with the increment function."<<endl<<endl;

    cout<<"Overall, the code highlights the importance of understanding local variable lifetimes and the behavior of references in C++. It's essential to avoid returning or using references or pointers to objects with a limited scope outside of that scope to prevent undefined behavior."<<endl;

    return 0;
}
