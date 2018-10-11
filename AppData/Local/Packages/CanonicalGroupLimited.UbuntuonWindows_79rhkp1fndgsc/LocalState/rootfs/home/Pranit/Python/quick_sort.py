def quicksort(listTOsort,lowindex,highindex):
	if(highindex - lowindex > 0):
		p = partition(listTOsort,lowindex,highindex)
		quicksort(listTOsort,lowindex,p-1)
		quicksort(listTOsort,p+1,highindex)

def partition(listTOsort,lowindex,highindex):
	divider = lowindex
	pivot = highindex
	
	for i in range(lowindex,highindex):
		if(listTOsort[i]< listTOsort[pivot]):
			listTOsort[i],listTOsort[divider] = listTOsort[divider],listTOsort[i]
			divider +=1
	
	listTOsort[pivot],listTOsort[divider]=listTOsort[divider],listTOsort[pivot]	
	return divider

list1 = [6,5,4,3,2,1,8,9,7]
list2 = [10,20,40,55,35,70]
quicksort(list2,0,5)
print list2
quicksort(list1,0,8)
print list1
