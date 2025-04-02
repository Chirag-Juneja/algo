"""
Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.



Example 1:

Input: nums = [1,2,3,1], k = 3
Output: true
Example 2:

Input: nums = [1,0,1,1], k = 1
Output: true
Example 3:

Input: nums = [1,2,3,1,2,3], k = 2
Output: false


Constraints:

1 <= nums.length <= 105
-109 <= nums[i] <= 109
0 <= k <= 105
"""

from typing import *


class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        if not k:
            return False
        hm = {}
        for idx, n in enumerate(nums):
            if n in hm:
                if idx - hm[n] <= k:
                    return True
            hm[n] = idx
        return False


def test_containsNearbyDuplicate():
    nums = [1, 2, 3, 1]
    k = 3
    result = Solution().containsNearbyDuplicate(nums, k)
    assert result


def test_not_containsNearbyDuplicate():
    nums = [1, 2, 3, 1, 2, 3]
    k = 2
    result = Solution().containsNearbyDuplicate(nums, k)
    assert not result


if __name__ == "__main__":
    test_containsNearbyDuplicate()
    test_not_containsNearbyDuplicate()
