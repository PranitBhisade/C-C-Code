class student:
	def __init__(self,sname,lname):
		self.sname = sname
		self.lname = lname
		print("constructor is called")

obj1 = student('Pranit','Bhisade')
print(obj1.sname,obj1.lname)

