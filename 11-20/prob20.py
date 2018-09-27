#Find the sum of the digits in the number 100!

import math

def sum_digits(value):
	return sum (map(int,str(value)))

def main():
	value = math.factorial(100)
	print(sum_digits(value))

if __name__ == '__main__':
	main()
