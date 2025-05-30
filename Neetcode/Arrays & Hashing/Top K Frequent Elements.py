"""
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.



Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
Example 2:

Input: nums = [1], k = 1
Output: [1]


Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104
k is in the range [1, the number of unique elements in the array].
It is guaranteed that the answer is unique.
"""

from typing import *
from collections import Counter


class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        counter = Counter(nums)
        result = [x[0] for x in counter.most_common(k)]
        return result


def test_topKFrequent():
    nums = [1, 1, 1, 2, 2, 3]
    k = 2
    result = Solution().topKFrequent(nums, k)
    print(result)
    assert result == [1, 2]


if __name__ == "__main__":
    test_topKFrequent()
