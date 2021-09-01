/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    }
};

int main()
{
    vector<int> nums = {1, 4, 5};
    Solution sol = Solution();
    vector<int> test = {0, 1, 2, 3, 4, 5, 6, 7};
    for (auto a : test)
    {
        cout << sol.searchInsert(nums, a) << endl;
    }
}