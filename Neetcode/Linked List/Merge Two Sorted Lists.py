"""
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.



Example 1:


Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: list1 = [], list2 = []
Output: []
Example 3:

Input: list1 = [], list2 = [0]
Output: [0]


Constraints:

The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both list1 and list2 are sorted in non-decreasing order
"""

from typing import *
from LinkedList import *


class Soluiton:
    def mergeTwoLists(
        self, list1: Optional[ListNode], list2: Optional[ListNode]
    ) -> Optional[ListNode]:
        if not list1:
            return list2
        if not list2:
            return list1
        if list1.val <= list2.val:
            head = list1
            second = list2
        else:
            head = list2
            second = list1
        merged = head
        while second:
            if merged.next == None:
                merged.next = second
                break
            if merged.next.val < second.val:
                merged = merged.next
            else:
                next = merged.next
                merged.next = second
                merged = merged.next
                second = second.next
                merged.next = next
        return head


def test_mergeTwoLists():
    list1 = to_linkedlist([1, 2, 4])
    list2 = to_linkedlist([1, 3, 4])
    mergedlist = Soluiton().mergeTwoLists(list1, list2)
    print(to_list(mergedlist))
    assert to_list(mergedlist) == [1, 1, 2, 3, 4, 4]


if __name__ == "__main__":
    test_mergeTwoLists()
