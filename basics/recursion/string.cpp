#include<iostream>
using namespace std;

int main(){
    string* sp = new string;
    *sp = "abc";
    cout<<"sp = "<<sp<<endl;
    cout<<"*sp = "<<*sp<<endl<<endl;

    string s = "def";
    //cout<<s<<endl;
    //cin>>s;
    //getline(cin, a);
    cout<<"s = "<<s<<endl;

    s = "ghijkl";
    cout<<"s = "<<s<<endl;
    cout<<"s[0] = "<<s[0]<<endl;
    s[0] = 'a';
    cout<<"s[0] = "<<s[0]<<endl<<endl;

    string s1;
    s1 = "mno";
    string s2 = s + s1;
    cout<<"s1 = "<<s1<<endl;
    cout<<"s2 = "<<s2<<endl;
    s += s1;
    cout<<"s = "<<s<<endl<<endl;

    cout<<"s.size() = "<<s.size()<<endl;
    cout<<"s.substr(3) = "<<s.substr(3)<<endl;
    cout<<"s.substr(3,3) = "<<s.substr(3,3)<<endl;
    cout<<"s.find(\"jkl\") = "<<s.find("jkl")<<endl;
    return 0;
}
