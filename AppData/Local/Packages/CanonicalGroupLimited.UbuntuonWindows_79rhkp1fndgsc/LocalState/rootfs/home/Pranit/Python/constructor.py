class vehicle:
	def __init__(self,Model,Price):
		self.Model = Model
		self.Price = Price
		#:self.bike =self.Model + ' ' + self.Price

obj1 = vehicle('Hero',7000)
obj2 = vehicle('Honda', 8000)
print(obj1.Model,obj1.Price)

