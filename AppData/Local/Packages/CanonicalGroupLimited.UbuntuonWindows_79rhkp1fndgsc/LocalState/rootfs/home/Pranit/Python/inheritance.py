# Drived class can use all properties of base class as well its new properties

class vehicle: #Base class
	def __init__(self,name):
		self.vehicle_name = name
	def get_name(self):
		return self.vehicle_name


class car(vehicle):#derived class
	def __init__(self):
		super().__init__('car')

c = car()
print(c.get_name())


