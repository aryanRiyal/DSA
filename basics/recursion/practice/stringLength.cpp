#include<iostream>
using namespace std;

int length(char s[]){
    if(s[0] == '\0'){
        return 0;
    }
    int smallOutput = length(s+1);
    return smallOutput+1;
}

int main(){
    char str[100];
    cout<<"str = ";
    cin>>str;
    int ans = length(str);
    cout<<"length = "<<ans<<endl;
    return 0;
}
