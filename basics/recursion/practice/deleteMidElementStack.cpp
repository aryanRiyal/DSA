#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void recursiveDeleteMid(stack<int>& st, size_t mid) {
        if(st.size() == mid){
            st.pop();
            return;
        }
        int topVal = st.top();
        st.pop();
        recursiveDeleteMid(st, mid);
        st.push(topVal);
        return;
    }
    
    void deleteMid(stack<int>& s) {
        size_t mid = (s.size() + 1)/2;
        recursiveDeleteMid(s, mid);
    }
    
    void printStack(stack<int> temp) {
        cout << "Stack (top → bottom): ";
        while(!temp.empty()) {
            cout<<temp.top()<<" ";
            temp.pop();
        }
        cout<<"\n";
    }
};

int main () {
    
    vector<int> dummy = {10, 20, 30, 40, 50, 60, 70};
    stack<int> st;
    
    for(int val: dummy) {
        st.push(val);
    }
    
    Solution sol;
    cout<<"Original Stack: \n";
    sol.printStack(st);
    
    sol.deleteMid(st);
    cout<<"After Deleting Middle Element:\n";
    sol.printStack(st);
    
    return 0;
}
