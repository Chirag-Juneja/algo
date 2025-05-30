"""
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.



Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation:
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
Example 2:

Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.
Example 3:

Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.


Constraints:

3 <= nums.length <= 3000
-105 <= nums[i] <= 10
"""

from typing import *


class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        result = []
        nums.sort()
        if all(e == 0 for e in nums):
            return [[0, 0, 0]]
        for idx in range(0, len(nums) - 1):
            if idx > 0 and nums[idx] == nums[idx - 1]:
                print(idx)
                continue
            left, right = idx + 1, len(nums) - 1
            while left < right:
                sum = nums[left] + nums[right] + nums[idx]
                if sum == 0:
                    r = [nums[idx], nums[left], nums[right]]
                    result.append(r)
                    left += 1
                    while nums[left] == nums[left - 1] and left < right:
                        left += 1
                elif sum < 0:
                    left += 1
                else:
                    right -= 1
        return result


def test_threeSum():
    nums = [-1, 0, 1, 2, -1, -4]
    result = Solution().threeSum(nums)
    print(result)
    assert result == [[-1, -1, 2], [-1, 0, 1]]
    nums = [0, 0, 0, 0]
    result = Solution().threeSum(nums)
    print(result)
    assert result == [[0, 0, 0]]


if __name__ == "__main__":
    test_threeSum()
