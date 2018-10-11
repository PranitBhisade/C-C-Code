class stacks():
	def __init__(self):
		self.items = []
	def push(self,item):
		self.items.append(item)

	def size(self):
		return len(self.items)

	def pop(self):
		return self.items.pop()
	
	def peek(self):
		return self.items[len(self.items)-1]


s = stacks()
s.push(4)
s.push(5)
s.push(6)
s.push(7)

print (s.size())
#print (s.pop



		
