# Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

# The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

# You must write an algorithm that runs in O(n) time and without using the division operation.


# Example 1:

# Input: nums = [1,2,3,4]
# Output: [24,12,8,6]
# Example 2:

# Input: nums = [-1,1,0,-3,3]
# Output: [0,0,9,0,0]


# Constraints:

# 2 <= nums.length <= 105
# -30 <= nums[i] <= 30
# The input is generated such that answer[i] is guaranteed to fit in a 32-bit integer.


# Follow up: Can you solve the problem in O(1) extra space complexity? (The output array does not count as extra space for space complexity analysis.)
from typing import *


class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        product = 1
        zeros = 0
        for n in nums:
            if n != 0:
                product *= n
            else:
                zeros += 1
        ans = [0] * len(nums)
        if zeros < 2:
            for idx in range(len(nums)):
                if zeros == 1:
                    if nums[idx] == 0:
                        ans[idx] = product
                if zeros < 1:
                    ans[idx] = int(product / nums[idx])
        return ans


if __name__ == "__main__":
    nums = [1, 2, 3, 4]
    res = [24, 12, 8, 6]
    ans = Solution().productExceptSelf(nums)
    assert ans == res
