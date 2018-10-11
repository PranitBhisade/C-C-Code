
data = open('sketch.txt')

for each_line in data:
	if not each_line.find(':') ==-1:
		(role,line_spoken) = each_line.split(':', 1 )
		print(role,end='')
		print('said:')
		print(line_spoken)
data.close()

