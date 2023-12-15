#include <iostream>
#include <string.h>
//#include <bits/stdc++.h>

using namespace std;
#include "shallowDeepCopy.cpp"

int main(){
    char name[] = "abcd";
    Student s1( 20, name);
    s1.display();
    for(int i = 0; name[i]!='\0'; i++) {
        name[i]++;
    }
    Student s2( 24, name);
    s2.display();

    s1.display();
    return 0;
}
