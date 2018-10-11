class speed:
	def __init__(self):
		self.speed = 10
		self.__speed_limit = 20

	def get_speed(self):
		return self.speed
	
	def get_speed_limit(self):
		return self.__speed_limit
		
	def set_speed_limit(self,new_speed_limit):
		self.__speed_limit = new_speed_limit


s = speed()
s.set_speed_limit(70)
print (s.get_speed(),s.get_speed_limit())




