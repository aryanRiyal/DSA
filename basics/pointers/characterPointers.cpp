#include<iostream>
using namespace std;

int main() {

    int a[] = {1,2,3};
    char b[] = "abc";
    char c[] = "";
    cout<<"int a[]  = ["<<a<<"], sizeof(a) = "<<sizeof(a)<<endl;
    cout<<"char b[] = ["<<static_cast<void*>(&b[0])<<"], sizeof(b) = "<<sizeof(b)<<endl;
    cout<<"char c[] = ["<<c<<"], sizeof(c) = "<<sizeof(c)<<endl<<endl;

    cout<<"normal array: int a[] = {1,2,3};"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"character array: char b[] = \"abc\";"<<endl;
    cout<<"b = "<<b<<endl;
    char * pc = &b[0];
    cout<<"if char * pc = &b; error: cannot convert \'char (*)[4]\' to \'char *\'"<<endl;
    cout<<"character pointer: char * pc = &b[0];"<<endl;
    cout<<"pc = "<<pc<<endl<<endl;

    char ch = 'a';
    char * pch = &ch;
    cout<<"ch = "<<ch<<endl;
    cout<<"char * pch = &ch;"<<endl;
    cout<<"pch = "<<pch<<endl<<endl;

    cout<<"In C++, \'std::cout\' handles char* differently because it recognizes them as null-terminated strings and automatically prints the string content."<<endl;
    cout<<"For other pointer types, it assumes you want to see the memory address and doesn't dereference the pointer by default."<<endl;
    cout<<"If you want to display the value pointed to by a pointer, you need to explicitly dereference it using the \'*\' operator."<<endl<<endl;

    char str[] = "abcde";
    char * pstr = "abcde";
    cout<<"char str[] = "<<str<<endl;
    cout<<"First it will be stored in the temporary memory, then because its initialized using str[] C++ will create an array named str & of size six and copy the content from the temporary memory to the newly created array. str = {'a','b','c','d','e','\\0'}"<<endl<<endl;
    cout<<"char * pstr = "<<pstr<<endl;
    cout<<"But in this case we are pointing pointer pstr towards the temporary memory"<<endl; 
    return 0;
}
