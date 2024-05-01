class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

class bst:
    def __init__(self):
        self.root = None

    def insert_node(self, data):
        new_node = Node(data)
        if self.root is None:
            self.root = new_node
        else:
            curr_node = self.root
            while True:
                if data < self.root.data:
                    if curr_node.left is None:
                        curr_node.left = new_node
                        return
                    else:
                        curr_node = curr_node.left
                else:
                    if curr_node.right is None:
                        curr_node.right = new_node
                        return
                    else:
                        curr_node = curr_node.right

    def inorder_traversal(self, root): 
        print()
        if root is None:
            return
        self.inorder_traversal(root.left)
        print(root.data, end=" ")
        self.inorder_traversal(root.right)

    def preorder(self,root):
        print()
        if root is None:
            return
        print(root.data, end=" ")
        self.preorder(root.left)
        self.preorder(root.right)

    def postorder(self,root):
        print()
        if root is None:
            return
        self.postorder(root.left)
        self.postorder(root.right)
        print(root.data, end=" ")

tree = bst()
tree.insert_node(5)
tree.insert_node(10)
tree.insert_node(20)
tree.insert_node(4)
tree.insert_node(1)
tree.insert_node(19)
tree.insert_node(27)
tree.insert_node(45)
tree.insert_node(21)
tree.insert_node(14)
tree.insert_node(18)
tree.inorder_traversal(tree.root)
tree.preorder(tree.root)
tree.postorder(tree.root)