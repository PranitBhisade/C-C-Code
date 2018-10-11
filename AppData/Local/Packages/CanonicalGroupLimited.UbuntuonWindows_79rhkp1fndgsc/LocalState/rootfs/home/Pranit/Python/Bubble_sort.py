def Bubble_sort(nlist):
	for i in range(len(nlist)-1,0,-1):
		for j in range(len(nlist)-1-i):
			if nlist[j]>nlist[j+1]:
				nlist[j],nlist[j+1]=nlist[j+1],nlist[j]
	return nlist

nlist=[2,4,3,6,5,8,7,9,10]
Bubble_sort(nlist)
print(nlist)
