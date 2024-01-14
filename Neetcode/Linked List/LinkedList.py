
class ListNode:
    def __init__(self,val=0,next=None) -> None:
        self.val = val
        self.next = next

def to_linkedlist(nums):
    head = ListNode(nums[0])
    current = head
    for n in nums[1:]:
        current.next = ListNode(n)
        current = current.next
    return head

def to_list(head):
    nums = []
    current = head
    while current:
        nums.append(current.val)
        current = current.next
    return nums

if __name__ == '__main__':
    nums = [1,2,3,4,5]
    assert nums == to_list(to_linkedlist(nums))