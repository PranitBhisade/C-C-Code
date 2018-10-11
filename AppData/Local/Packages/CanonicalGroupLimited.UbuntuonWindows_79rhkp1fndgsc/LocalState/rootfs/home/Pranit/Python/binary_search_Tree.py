class Node:
	def __init__(self,val):
 		self.val = val
		self.left = None #left edge
		self.right = None #right edge

class binary_tree:
	def __init__(self):
		self.root = None

	#add node to binary tree
	def add(self,val):
		if(self.root == None):
			self.root = Node(val)
		else:
			add_node(self.root,val) #calling function add_node 
                                                
	
	def add_node(self,node,val):
		if(node.val < val):
			self.add_right(node, val)
		else:
			self.add_left(node,val)
	
	def add_right(self,node,val):
		if(node.right == None):
			node.right = Node(val)
		else:
			self.add_node(node.right, val)
	
	
	def add_left(self,node,val):
		if(node.left == None):
			node.left = Node(val)
		else:
			self.add_node(node.left, val)


tree = binary_tree()
tree.add(3)
tree.add(4)
tree.add(5)
tree.add(2)
print(tree)

