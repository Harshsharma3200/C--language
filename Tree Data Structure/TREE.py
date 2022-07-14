#Breath first search

class Node:
	def __init__(self,item):
		self.left=None
		self.right=None
		self.val=item


def inorder(root):
	if root:
		inorder(root.left)
		print(str(root.val)+"->",end=" ")
		inorder(root.right)


def preorder(root):
	if root:
		print(str(root.val)+"->",end=" ")
		preorder(root.left)
		preorder(root.right)


def postorder(root):
	if root:
		postorder(root.left)
		postorder(root.right)
		print(str(root.val)+"->",end=" ")

		
# root = Node(1)
# root.left =  Node(2);
# root.right=  Node(5);
# root.left.left =  Node(3);
# root.left.right =  Node(4);
# root.left.left.left=Node(8);
# root.right.left= Node(6);
# root.right.right= Node(7);
# root.right.left.right= Node(9)
root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)

print("Inorder traversal ")
inorder(root)

print("\nPreorder traversal ")
preorder(root)

print("\nPostorder traversal ")
postorder(root)