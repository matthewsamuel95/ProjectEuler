# What is the index of the first term in the Fibonacci sequence
# to contain 1000 digits?
 
def fib(table,index):
	if table.get(index) is not None:
		return table[index]
	if index < 2:
		return index
	table[index]=fib(table,index-1)+fib(table,index-2)
	return table[index]

def main():
	table = {}
	table[0]=0
	start = 0
	while len(str(fib(table,start))) < 1000:
		start = start + 1
	print start

if __name__ == '__main__':
	main()
