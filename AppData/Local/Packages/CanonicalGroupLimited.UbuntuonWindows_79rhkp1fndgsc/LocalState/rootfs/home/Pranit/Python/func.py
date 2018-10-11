#This program will return momentum(P) and energy(e)
'''
def momentum_energy(m,v): #passing mass and velocity

	p = m*v

	e = 0.5 * m * v**2

	return p,e # return is must else shows NOne

a = momentum_energy(5,5)
print a
'''
'''
a = 5
b = 4
def outer(m,n):
	#local scope is always inside function body
	p = 10
	def inner(x,y):
		return a*p*x + b*n*y
	
	return inner(m,n)

#global scope is always outside function body

c = outer(1,5)
print c
'''
'''
a = 6

def a_global():
	print a
def a_local():
	a =40
	print a
a_global()
a_local()
print(a)
'''
'''

a = 'A'

def func():
	global a
	print ("Capital " + a)

	a = 'a'
	print("Small " + a)

func()

print("Global " + a)


'''

#Recursion

def fib(n):
	if n = 0 or n = 1:
		return n
	else:
		return (fib(n-1) + fib(n-2))


print(fib(3))





































