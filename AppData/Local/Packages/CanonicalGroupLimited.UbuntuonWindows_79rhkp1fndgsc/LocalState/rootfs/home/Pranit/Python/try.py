try:
 	fh = open("test","w")
	
	try:
		fh.write("This is test file")
	
	finally:
		print "Going to close file"
		fh.close()

except IOError:
	print "cant find file to write"
