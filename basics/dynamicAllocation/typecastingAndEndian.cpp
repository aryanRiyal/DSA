#include<iostream>
using namespace std;

int main(){
    int i = 65;
    char c = i;
    cout<<"int i        = 65;"<<endl;
    cout<<"int * p      = &i;"<<endl;
    cout<<"char c       = i; (implicit typecasting)"<<endl;
    cout<<"char * pc    = (char *)p; (explicit typecasting)"<<endl<<endl;

    int * p = &i;
    char * pc = (char *)p;
    cout<<"c        = "<<c<<endl;
    cout<<"p        = "<<p<<endl;
    cout<<"pc       = ["<<pc<<"]"<<endl<<endl;

    cout<<"*p       = "<<*p<<endl;
    cout<<"*pc      = ["<<*pc<<"]"<<endl;
    cout<<"*(pc+1)  = ["<<*(pc+1)<<"]"<<endl;
    cout<<"*(pc+2)  = ["<<*(pc+2)<<"]"<<endl;
    cout<<"*(pc+3)  = ["<<*(pc+3)<<"]"<<endl<<endl;


    cout<<"The fact that the value 65 appears at the first byte when you interpret it as a char* is related to how integers are stored in memory and the endianness of your system."<<endl<<endl;

    cout<<"1. Memory Layout: In most computer architectures, multi-byte data types like integers are stored in memory using contiguous bytes."<<endl;
    cout<<"For example, a 4-byte integer (like int) is typically stored in four consecutive bytes in memory."<<endl<<endl;

    cout<<"2. Endianness: Endianness refers to the byte order in which the bytes of a multi-byte data type are stored in memory. There are two common representations: big-endian and little-endian."<<endl;
    cout<<"     (i) Big-Endian: In a big-endian system, the most significant byte is stored at the lowest memory address, and the least significant byte is stored at the highest memory address."<<endl;

    cout<<"     (ii) Little-Endian: In a little-endian system, it's the opposite; the least significant byte is stored at the lowest memory address, and the most significant byte is stored at the highest memory address."<<endl<<endl;

    cout<<"The result you observed (65 in the first byte) suggests that your system is using a little-endian architecture."<<endl<<endl;

    cout<<"When you interpret an int as a char*, you're essentially looking at the individual bytes that make up the integer. In a little-endian system, the least significant byte comes first, so when you cast the int pointer to a char*, you see the least significant byte of the integer first."<<endl;
    cout<<"In your case, that least significant byte has a decimal value of 65. It's important to note that endianness is a low-level detail of the hardware architecture and may vary between different systems."<<endl;
    cout<<"Some architectures are big-endian, and others are little-endian. The choice of endianness can affect data serialization, network communication, and binary file formats. In most high-level programming, you don't need to worry about endianness, as the system's underlying libraries and tools handle it transparently for you."<<endl;
    return 0;
}
