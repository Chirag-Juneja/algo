# Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

# A subarray is a contiguous non-empty sequence of elements within an array.


# Example 1:

# Input: nums = [1,1,1], k = 2
# Output: 2
# Example 2:

# Input: nums = [1,2,3], k = 3
# Output: 2

# Constraints:

# 1 <= nums.length <= 2 * 104
# -1000 <= nums[i] <= 1000
# -107 <= k <= 107

from typing import *


class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        prev = 0
        d = {0: 1}
        ans = 0
        for num in nums:
            prev += num
            if prev - k in d:
                ans += d[prev - k]
            d[prev] = d.get(prev, 0) + 1
        return ans


if __name__ == "__main__":
    nums = [1, 2, 3]
    k = 3
    result = Solution().subarraySum(nums, k)
    print(result)
    assert result == 2
