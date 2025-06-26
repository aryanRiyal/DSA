/*

Leetcode 78
Given an integer array nums of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(const vector<int>& input,
               vector<int>& output,
               size_t index,
               vector<vector<int>>& result) {
        if (index == input.size()) {
            result.push_back(output);
            return;
        }
        solve(input, output, index + 1, result);
        output.push_back(input[index]);
        solve(input, output, index + 1, result);
        output.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> output;
        solve(nums, output, 0, result);
        return result;
    }

    void printSubsets(const vector<vector<int>>& temp) {
        cout << "All possible subsets: "<<temp.size()<<"\n";

        cout << "[";
        for (size_t i = 0; i < temp.size(); ++i) {
            cout << "[";
            for (size_t j = 0; j < temp[i].size(); ++j) {
                cout << temp[i][j];
                if (j + 1 < temp[i].size()) cout << ", ";
            }
            cout << "]";
            if (i + 1 < temp.size()) cout << ", ";
        }
        cout << "]\n";
    }
};

int main() {
    vector<int> dummy = {1, 2, 3, 4};
    Solution sol;

    vector<vector<int>> result = sol.subsets(dummy);
    sol.printSubsets(result);

    return 0;
}

