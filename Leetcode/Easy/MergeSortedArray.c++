/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int k = m + n - 1;
        m--;
        n--;
        while (n >= 0)
        {
            if (m >= 0 && nums1[m] > nums2[n])
            {
                nums1[k--] = nums1[m--];
            }
            else
            {
                nums1[k--] = nums2[n--];
            }
        }
    }
};

int main()
{
    vector<int> nums1 = {0};
    int m = 0;
    int n = 1;
    vector<int> nums2 = {1};
    Solution sol = Solution();
    sol.merge(nums1, m, nums2, n);
    for (auto a : nums1)
    {
        cout << a << endl;
    }
}