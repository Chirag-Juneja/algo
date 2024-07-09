"""
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
"""

from typing import *
from LinkedList import *


class Soluiton:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head:
            next = head.next
            prev = head
            while next:
                if next.val == prev.val:
                    prev.next = next.next
                    next = next.next
                else:
                    prev = prev.next
                    next = next.next
            return head


def test_deleteDuplicate():
    nums = [1, 1, 2, 3, 3]
    head = to_linkedlist(nums)
    result = Soluiton().deleteDuplicates(head)
    assert to_list(result) == [1, 2, 3]


if __name__ == "__main__":
    test_deleteDuplicate()
