# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalancedInt(self,root)->int:
        if not root:
            return 0
        lh = self.isBalancedInt(root.left)
        rh = self.isBalancedInt(root.right)
        if lh == -1 or rh == -1:
            return -1
        if abs(lh-rh)>1:
            return -1
        else:
            return max(lh,rh)+1

    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        height = self.isBalancedInt(root)
        return True if height>=0 else False
