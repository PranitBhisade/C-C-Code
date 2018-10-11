
def Binary_search(arr,l,r,x): #l=left most element position,r=right most element array 
	if r >= l:
		mid = l + (r-1)/2
		
		if arr[mid] == x:
			return mid

		elif arr[mid] > x:
			return Binary_search(arr,l,mid-1,x)

		else:
			return Binary_search(arr,mid+1,r,x)
	else:
		return -1

arr = [2,3,4,5,6,7,8,9]
x = 5



result = Binary_search(arr,0,len(arr)-1,x)
if result != -1:
	print "Element is present at index %d" %result
else:
	print "Element is not present in array"
		
