# You are given two non-empty linked lists representing two non-negative integers.
# The digits are stored in reverse order, and each of their nodes contains a single digit.
# Add the two numbers and return the sum as a linked list.
# You may assume the two numbers do not contain any leading zero, except the number 0 itself.

# Input: l1 = [2,4,3], l2 = [5,6,4]
# Output: [7,0,8]
# Explanation: 342 + 465 = 807.

from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def addTwoNumbers(
        self, l1: Optional[ListNode], l2: Optional[ListNode]
    ) -> Optional[ListNode]:
        start = ListNode()
        carry = 0
        sum = start
        first = 1
        while l1.next or l2.next or carry or first or l1.val or l2.val:
            first = 0
            sum.next = ListNode()
            sum = sum.next
            val = l1.val + l2.val + carry
            sum.val = val % 10
            carry = val // 10
            print(val, carry)
            if l1.next:
                l1 = l1.next
            else:
                l1 = ListNode()
            if l2.next:
                l2 = l2.next
            else:
                l2 = ListNode()
        return start.next
