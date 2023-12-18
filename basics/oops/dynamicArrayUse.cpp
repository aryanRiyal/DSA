#include <iostream>
using namespace std;

#include "dynamicArray.cpp"

int main() {
    DynamicArray arr1;

    arr1.add(10);
    arr1.add(20);
    arr1.add(30);
    arr1.add(40);
    arr1.add(50);
    arr1.add(60);

    cout<<"DynamicArray arr1 = ";
    arr1.print();
    cout<<endl;

    DynamicArray arr2(arr1);    //Copy Constructor

    DynamicArray arr3;
    arr3 = arr1;

    arr1.add(0, 1000);
    cout<<"arr1.add(0, 1000);"<<endl<<endl;

    cout<<"DynamicArray arr1 = ";
    arr1.print();
    cout<<endl;
    cout<<"DynamicArray arr2 = ";
    arr2.print();
    cout<<endl;
    cout<<"DynamicArray arr3 = ";
    arr3.print();

    return 0;
}
