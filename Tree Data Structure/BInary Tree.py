
#Binary tree
class Node:
	def __init__(self,key):
		self.left=None
		self.right=None
		self.val=key

	def Preorder(self):
		print(str(self.val)+"->",end=' ')
		if self.left:
			self.left.Preorder()
		if self.right:
			self.right.Preorder()

	def postorder(self):
		if self.left:
			self.left.postorder()
		if self.right:
			self.right.postorder()
		print(str(self.val)+"->",end=' ')


	def inorder(self):
		if self.left:
			self.left.inorder()
		print(str(self.val)+"->",end=' ')
		if self.right:
			self.right.inorder()


root = Node(1)

root.left = Node(2)
root.right = Node(3)

root.left.left = Node(4)



print("Pre order Traversal: ", end="")
root.Preorder()
print("\nIn order Traversal: ", end="")
root.inorder()
print("\nPost order Traversal: ", end="")
root.Preorder()