class Node: #Initially define a class for node
	def __init__(self,data):
		self.data = data #Pointer to data#
		self.next_node = None #Pointer to next node
	
	
	def remove(self,data,prev_Node): #function to remove data & prev_node
		if self.data == data: # Pointing to required data 
			prev_Node.next_node = self.next_node # Prev Node points to next node 1->2->3 then 1->3 2 will be deleted
			del self.data # Delete pointed data
			del self.next_node # Delete pointed node
		else:
			if self.next_node is not None: # Remove next node /if none
				self.next_node.remove(data,self)

class linked_list():
	def __init__(self):
		self.head = None #First node in linked list
  		self.counter = 0
	def traverselist(self):
		actualNode = self.head
		while actualNode is not None:
			print("%d " %actualNode.data)
			actualNode = actualNode.next_node
	
	def insert(self,data):
		self.counter += 1
		new_node = Node(data)
		
		if not self.head:
			self.head = new_node
		
		else:
			new_node = self.head
			self.head = new_node
	
	
	def size(self):
		return self.counter


	def remove(self,data):
		if self.head:
			if data == self.head.data:
				self.head = self.head.next_node
			else:
				self.head.remove(data,self.head)




linkedlist = linked_list()
linkedlist.insert(12)
linkedlist.insert(13)
linkedlist.insert(14)
linkedlist.inse(linkedlist.size())
print(linkedlist.remove(3))
print(linkedlist.size())
	
