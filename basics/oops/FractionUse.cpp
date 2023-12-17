#include <iostream>
using namespace std;

#include "Fraction.cpp"

int main() {
    Fraction f1(10,2);
    Fraction f2(15,4);

    if(f1 == f2) {
        cout<<"Equal"<<endl;
    }
    else {
        cout<<"Not Equal"<<endl;
    }

    cout<<"Fraction f1 = ";
    f1.print();
    cout<<"Fraction f2 = ";
    f2.print();
    cout<<endl;

    cout<<"adding f1 and f2: f3 = f1.add(f2)"<<endl;
    Fraction f3 = f1.add(f2);
    cout<<"Fraction f1 = ";
    f1.print();
    cout<<"Fraction f2 = ";
    f2.print();
    cout<<"Fraction f3 = ";
    f3.print();

    cout<<endl<<"Operator Overloading: operator+"<<endl;
    f1 = f2 + f3;
    cout<<"f1 = f2 + f3;"<<endl<<"f1 = ";
    f1.print();

    cout<<endl<<"Pre-increment: operator++"<<endl;
    f3 = ++f1;
    cout<<"f3 = ++f1;"<<endl<<"f1 = ";
    f1.print();
    cout<<"f3 = ";
    f3.print();
    f1 = ++(++f3);
    cout<<"f1 = ++(++f3);"<<endl<<"f3 = ";
    f3.print();
    cout<<"f1 = ";
    f1.print();

    cout<<endl<<"Post-increment: operator++"<<endl;
    f3 = f1++;
    cout<<"f3 = f1++;"<<endl<<"f1 = ";
    f1.print();
    cout<<"f3 = ";
    f3.print();
    cout<<endl;

    (f1 += f2) += f2;
    cout<<"(f1 += f2) += f2;"<<endl<<"f1 = ";
    f1.print();
    cout<<"f2 = ";
    f2.print();
    cout<<endl<<endl;

    cout<<"multiplying f1 and f2: f3 = f1.multiply(f2)"<<endl;
    f3 = f1.multiply(f2);
    cout<<"Fraction f1 = ";
    f1.print();
    cout<<"Fraction f2 = ";
    f2.print();
    cout<<"Fraction f3 = ";
    f3.print();
    cout<<endl<<"Operator Overloading: operator*"<<endl;
    f1 = f2 * f3;
    cout<<"f1 = f2 * f3;"<<endl<<"f1 = ";
    f1.print();
    cout<<endl;

    Fraction const f4( 3, 11);
    cout<<"Fraction f4 = ";
    f4.print();
    cout<<"f4.getNumerator() = "<<f4.getNumerator()<<", f4.getDenominator() = "<<f4.getDenominator()<<endl;
    
    return 0;
}
