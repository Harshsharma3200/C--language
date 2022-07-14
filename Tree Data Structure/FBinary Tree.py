#to check the given tree is a binary tree.
class Node(object):
	"""docstring for Node"""
	def __init__(self, arg):
		self.left=None
		self.right=None
		self.item=arg

def isfull(root):
	if root is None:
		return True
	if root.left is None and root.right is None:
		return True
	if root.left is not None and root.right is not None:
		return (isfull(root.left)and isfull(root.right))

	return False

root = Node(1)
root.rightChild = Node(3)
root.leftChild = Node(2)

root.leftChild.leftChild = Node(4)
root.leftChild.rightChild = Node(5)
root.leftChild.rightChild.leftChild = Node(6)
root.leftChild.rightChild.rightChild = Node(7)

if isfull(root):
    print("The tree is a full binary tree")
else:
    print("The tree is not a full binary tree")