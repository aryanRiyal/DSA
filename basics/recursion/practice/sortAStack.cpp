#include <bits/stdc++.h>
using namespace std;


class SortedStack{
public:
    stack<int> s;

void sort() {
     if(s.size() <= static_cast<size_t>(1)) {
     //if(s.size() <= 1) {
         return;
     }
     int topVal = s.top();
     s.pop();
     sort();
     insert(s, topVal);
     return;
 }

void printStack(stack<int> temp) {
    while(!temp.empty()) {
        cout<< temp.top()<< " ";
        temp.pop();
    }
    cout<<"\n";
}

private:
void insert(stack<int> &s, int num) {
    if(s.empty() || s.top() <= num ) {
        s.push(num);
        return;
    }
    int topVal = s.top();
    s.pop();
    insert(s, num);
    s.push(topVal);
    return;
}
};

int main() {
    vector<int> dummy = {34, 2, 56, 9, 3 ,0, 11};

    SortedStack st;
    for(int i: dummy) {
        st.s.push(i);
    }

    st.printStack(st.s);
    st.sort();
    cout<<"Stack after sorting (top -> bottom):\n";
    st.printStack(st.s);
}
