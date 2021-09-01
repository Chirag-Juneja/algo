/*
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        if (nums.begin() == nums.end())
        {
            return 0;
        }
        int k;
        auto forward = nums.begin();
        auto backward = nums.end() - 1;
        while (forward <= backward)
        {
            if (*forward == val)
            {
                if (*backward != val)
                {
                    *forward = *backward;
                    forward++;
                    backward--;
                }
                else
                {
                    backward--;
                }
            }
            else
            {
                forward++;
            }
        }
        k = distance(nums.begin(), forward);
        return k;
    }
};

int main()
{
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    Solution sol = Solution();
    int k = sol.removeElement(nums, 2);
    for (auto i = 0; i < k; i++)
    {
        cout << nums[i] << endl;
    }
    return 0;
}