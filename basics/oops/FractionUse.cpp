#include <iostream>
using namespace std;

#include "Fraction.cpp"

int main() {
    Fraction f1(10,2);
    Fraction f2(15,4);

    cout<<"Fraction f1 = ";
    f1.print();
    cout<<"Fraction f2 = ";
    f2.print();
    cout<<endl;

    cout<<"adding f1 and f2: calling f1.add(f2)"<<endl;
    f1.add(f2);
    cout<<"Fraction f1 = ";
    f1.print();
    cout<<"Fraction f2 = ";
    f2.print();
    cout<<endl;

    cout<<"multiplying f1 and f2: calling f1.multiply(f2)"<<endl;
    f1.multiply(f2);
    cout<<"Fraction f1 = ";
    f1.print();
    cout<<"Fraction f2 = ";
    f2.print();
    return 0;
}
