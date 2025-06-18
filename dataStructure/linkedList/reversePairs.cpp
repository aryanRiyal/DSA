class Solution {
    public:
        int merge(vector<int>& nums, int si, int mid, int ei) {
            int count = 0;
            int n1 = mid - si + 1;
            int n2 = ei - mid;
            vector<int> left;
            vector<int> right;
            for(int i = 0; i<n1; i++) {
                left.push_back(nums[si + i]);
            }
            for(int i = 0; i<n2; i++) {
                right.push_back(nums[mid + i + 1]);
            }
            int i = 0, j = 0, k = si;
            while(i < n1 && j < n2) {
                if(left[i] <= right[j]) {
                    nums[k] = left[i];
                    i++;
                }
                else {
                    nums[k] = right[j];
                    j++;
                    count += n1 - i;
                }
                k++;
            }
            while(i<n1) {
                nums[k] = left[i];
                k++;
                i++;
            }
            while(j<n2) {
                nums[k] = right[j];
                k++;
                j++;
            }
            return count;
        }

        int mergeSort(vector<int>& nums, int si, int ei) {
            int count = 0;
            if(si>=ei) {
                return count;
            }
            int mid = si + (ei - si)/2;
            count += mergeSort(nums, si, mid);
            count += mergeSort(nums, mid+1, ei);
            count += merge(nums, si, mid, ei);
            return count;
        }

        void printVector(vector<int>& nums, int n) {
            for(int i = 0; i<n; i++) {
                cout<<nums[i]<<" ";
            }
        }

        int reversePairs(vector<int>& nums) {
            int si = 0;
            int ei = n-1;
            int ans = mergeSort(a, si, ei);
            return ans;
        }
};
