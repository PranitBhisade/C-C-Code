	def __init__(self):
		self.speed = 10
		self.__max_speed = 100		
	def get_speed(self):
		return self.speed
	def get_max_speed(self):
		return self.__max_speed
	def set_max_speed(self,new_max_speed):
		self.__max_speed = new_max_speed
S = speed()
S.speed = 50
S.set_max_speed(70)
print(S.get_speed(),S.get_max_speed())


