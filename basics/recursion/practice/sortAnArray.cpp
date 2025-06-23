// Sort an array using Recursion

#include <bits/stdc++.h>
using namespace std;

void insertRecursion(vector<int>& arr, int temp) {
	if(arr.size() == 0 || arr[arr.size() - 1] <= temp ) {
		arr.push_back(temp);
		return;
	}
	int removed = arr[arr.size() - 1];
	arr.pop_back();
	insertRecursion(arr, temp);
	arr.push_back(removed);
}

void sortRecursion(vector<int>& nums) {
	if(nums.size() == 1) {
		return;
	}
	int removed = nums.back();
	nums.pop_back();
	sortRecursion(nums);
	insertRecursion(nums, removed);
}

int main()
{
	vector<int> nums= {5,2,9,6,45,0,83, 1};

	sortRecursion(nums);
	for(int i =0; i<nums.size(); i++) {
		cout<<nums[i]<<" ";
	}
    cout<<endl;
	return 0;
}
