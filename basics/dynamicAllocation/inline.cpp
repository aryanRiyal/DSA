#include<iostream>
using namespace std;

inline int max(int a, int b){
    return (a > b) ? a : b;
}

int main(){
    int a, b;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;

    int c = max(a,b);
    cout<<"int c = max(a,b);"<<endl;
    cout<<"c = "<<c<<endl<<endl;

    int x = 12, y = 24;
    cout<<"int x = 12, y = 24;"<<endl;

    int z = max(x,y);
    cout<<"int z = max(x,y);"<<endl;
    cout<<"z = "<<z<<endl<<endl;
    
    cout<<"The inline keyword suggests to the compiler that it should replace the function call with the actual function code to improve performance in certain cases.It mostly works for 1 line functions, sometimes for 2-3 lined functions but above 3 lines it doesn't work."<<endl;
    cout<<"It's most effective for small, frequently called functions where the benefits of reduced function call overhead outweigh the potential downsides of increased code size and complexity."<<endl;
    return 0;
}
