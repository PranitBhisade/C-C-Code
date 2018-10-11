class complex_number:
	def __init__(self, r = 0,i = 0):
		self.real = r
		self.imag = i

	def getdata(self):
		print("{ }+{ }j".format(self.real,self.imag))


c1 = complex_number(2,3)
c1.getdata()
print(c1.real,c1.imag)
c2 = complex_number(5)


