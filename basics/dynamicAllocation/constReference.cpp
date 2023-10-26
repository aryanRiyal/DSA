#include<iostream>
using namespace std;

int main(){
    cout<<"Constant int"<<endl;
    const int i = 10;
    //int const i2 = 12; //(both ways of initializing results the same)
    //i++;               //(error: increment of read-only variable ‘i’)
    cout<<"const int i = "<<i<<";"<<endl;
    cout<<"Here the storage is constant"<<endl<<endl;

    cout<<"Constant reference from a non const int"<<endl;
    int j = 100;
    const int & k = j;
    j++;
    cout<<"const int & k = j;"<<endl;
    cout<<"j++;"<<endl;
    cout<<"k = "<<k<<endl;
    cout<<"Here only the path is constant(so k becomes a read-only path) not the storage that's why we can increment j"<<endl<<endl;

    cout<<"Constant reference from a const int"<<endl;
    const int j2 = 110;
    const int & k2 = j2;
    cout<<"const int & k2 = j2;"<<endl;
    cout<<"k2 = "<<k2<<endl<<endl;

    cout<<"Reference from a const int"<<endl;
    cout<<"//const int j3 = 120;"<<endl;
    cout<<"//int & k3 = j3;"<<endl;
    cout<<"//error: binding reference of type 'int' to 'const int' discards 'const' qualifiers"<<endl;
    return 0;
}
