#include<iostream>
#include<cmath>
using namespace std;

void printSubs(string input, string output2){
    if(input.empty()){
        cout<<"["<<output2<<"] ";
        return;
    }
    printSubs(input.substr(1), output2);
    printSubs(input.substr(1), output2+input[0]);
}

int subs(string input, string output[]){
    if(input.empty()){
        output[0] = "";
        return 1;
    }
    string smallString = input.substr(1);
    int smallOutputSize = subs( smallString, output);
    for(int i = 0; i<smallOutputSize; i++){
        output[i + smallOutputSize] = input[0] + output[i];
    }
    return 2*smallOutputSize;
}

int main(){
    string input = "ajs";
    int size = input.size();
    size = pow(2,size);
    string * output = new string[size];
    int count = subs( input, output);
    for(int i = 0; i<count; i++){
        cout<<"["<<output[i]<<"] ";
    }
    cout<<endl<<"Another method"<<endl;
    string output2 = "";
    printSubs( input, output2);
    cout<<endl;
    return 0;
}
