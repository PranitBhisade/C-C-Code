def KtoF(temp):
	assert (temp >= 0),"Colder than absolute zero"
	return((temp-273)*1.8)+32

print KtoF(273)
print int(KtoF(505.78))
print KtoF(-7)

