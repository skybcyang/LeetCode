# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSubPath(self, head: ListNode, root: TreeNode) -> bool:
        path_list = self.get_path_list(root)
        print(path_list)
        node_str = self.get_node_str(head)
        print(node_str)
        for path in path_list:
            if node_str in path:
                return True
        return False
    
    def get_node_str(self, head: ListNode):
        res = str(head.val)
        while head.next is not None:
            head = head.next
            res += str(head.val)
        return res
    
    def get_path_list(self, root: TreeNode):
        res = []
        if root.left is not None:
            res.extend(self.get_path_list(root.left))
        if root.right is not None:
            res.extend(self.get_path_list(root.right))
        if len(res) == 0:
            res.append("")
        for i in range(len(res)):
            res[i] = str(root.val) + res[i]
        return res