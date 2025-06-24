/*

You are given a stack St. You have to reverse the stack using recursion.

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    void inductionStep(stack<int> &St, int val) {
        if(St.empty()) {
            St.push(val);
            return;
        }
        int topVal = St.top();
        St.pop();
        inductionStep(St, val);
        St.push(topVal);
        return;
    }

    void Reverse(stack<int> &St) {
        if(St.empty()) {
            return;
        }
        int topVal = St.top();
        St.pop();
        Reverse(St);
        inductionStep(St, topVal);
        return;
    }
    
    void printStack(stack<int> temp) {
        cout<<"Stack (top->bottom): ";
        while(!temp.empty()) {
            cout<<temp.top()<<" ";
            temp.pop();
        }
        cout<<"\n";
    }
};

int main() {
    vector<int> dummy = {10, 20, 30, 40, 50, 60, 70};
    stack<int> St;
    for(int val : dummy) {
        St.push(val);
    }
    
    Solution sol;

    cout << "Original Stack:\n";
    sol.printStack(St);

    sol.Reverse(St);

    cout << "After Reversing:\n";
    sol.printStack(St);
}
