class HelloWorld:
	def __init__(self):
		self.i = 10 #instance variable
		print("Hello world")
	def print_i(self):
		print("i=",self.i)

helloObj=HelloWorld()
helloObj.print_i()
