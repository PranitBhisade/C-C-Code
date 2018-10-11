list_element = [4,2,8,9,7,10]

x = int(input("Enter number to search"))
found = False

for i in range(len(list_element)):
	if(list_element[i] == x):
		print("%d found at %dth position"%(x,i))
		found = True	
		break
if(found == False):
	print("%d Element is not in list"%x)
	

		
