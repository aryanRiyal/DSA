#include<iostream>
using namespace std;

int fib(int n){

    if(n == 0 || n == 1){
        return n;
    }

    int smallOutput1 = fib(n-1);
    int smallOutput2 = fib(n-2);
    
    return smallOutput1 + smallOutput2;
}

int main(){
    int n,answer = 0;
    cout<<"Number of fibonacci numbers to print: ";
    cin>>n;
    for(int i = 0; i<n; i++){
        answer = fib(i);
        cout<<answer<<" ";
    }
    cout<<"\n";
    return 0;
}
