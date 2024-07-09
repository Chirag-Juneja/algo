""" 
Given the head of a singly linked list, reverse the list, and return the reversed list.
"""

from typing import *
from LinkedList import *


class Soluiton:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head and head.next:
            fast = head.next
            head.next = None
            slow = head
            while fast.next != None:
                current = fast
                fast = fast.next
                current.next = slow
                slow = current
            fast.next = slow
            return fast
        else:
            return head


def test_reverseList():
    nums = [1, 2, 3, 4, 5]
    head = to_linkedlist(nums)
    reversed_head = Soluiton().reverseList(head)
    print(to_list(reversed_head))
    assert to_list(reversed_head) == [5, 4, 3, 2, 1]


if __name__ == "__main__":
    test_reverseList()
