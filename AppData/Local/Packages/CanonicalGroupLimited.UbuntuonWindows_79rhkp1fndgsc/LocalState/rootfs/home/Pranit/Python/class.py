class Myclass: #First define a class
	def __init__(self,fname,lname): #make constructor of class and pass value
		self.fname = fname
		self.lname = lname
		self.full_name = self.fname + ' * ' + self.lname
		print("Call constructor")


#make object for class Myclass
obj1 = Myclass('Pranit','Bhisade')
obj2 = Myclass('Rahul','sharma')

print(obj2.full_name)

print(obj1.fname)

