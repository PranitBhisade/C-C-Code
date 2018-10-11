def decorator(f):
	def wrapper(i,j):
		print("befor addition")
		print("sum =",f(i,j))
		print("after addition")
	return wrapper

@decorator
def add(i,j):
	return i + j

print(add(10,20))

