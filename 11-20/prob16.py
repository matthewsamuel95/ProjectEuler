#What is the sum of the digits of the number 2^1000?

def sum_digits(value):
	return sum (map(int,str(value)))

def main():
	value = 2**1000
	print(sum_digits(value))

if __name__ == '__main__':
	main()
