/*
GFG
In the Tower of Hanoi puzzle, you are given n disks stacked in ascending order (smallest at the top) on the first of three rods. The goal is to move all disks to the third rod following two rules: only one disk can be moved at a time, and a disk can only be placed on top of a larger disk. Given the number of disks n and three rods labeled as from, to, and aux (starting rod, target rod, and auxiliary rod, respectively),  returns the total number of moves needed to transfer all disks from the starting rod to the target rod.

*/


#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        if(n == 0) return 0;
        int count = 1;
        if(n == 1) {
            return 1;
        }
        count += towerOfHanoi(n-1, from, aux, to);
        count += towerOfHanoi(n-1, aux, to, from);
        return count;
    }
};

int main() {
    int n = 4;
    int from = 1;
    int to = 3;
    int aux = 2;
    Solution sol;
    int result = sol.towerOfHanoi(n, from, to, aux);
    cout<<result<<"\n";
    return 0;
}
