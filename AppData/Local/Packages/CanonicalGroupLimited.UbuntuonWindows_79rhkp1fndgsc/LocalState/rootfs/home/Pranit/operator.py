class length:
	def __init__(self,c,m):
		self.c = c
		self.m = m

	def __str__(self):
		return('length(%d cm, %d mm)' % (self.c, self.m))
	
	def __add__(self,other):
		return (length(self.c + other.c,self.m + other.m))

l1 = length(2,6)
l2 = length(3,4)

print(l1 + l2)
