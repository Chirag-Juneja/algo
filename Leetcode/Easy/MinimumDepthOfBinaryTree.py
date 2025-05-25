# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDepth(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0
        ld = self.minDepth(root.left)
        rd = self.minDepth(root.right)
        if ld and rd:
            return min(ld, rd)+1
        elif ld:
            return ld+1
        else:
            return rd+1
