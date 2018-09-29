# Find the sum of all the positive integers which cannot be 
# written as the sum of two abundant numbers.

from math import sqrt

def is_abundant(value):
	sum = 1
	sqrt_value = int(sqrt(value))
	#perfect square
	if value == sqrt_value*sqrt_value:
		sum += sqrt_value
	else:
		sqrt_value += 1
	for i in range(2,sqrt_value):
		if value % i == 0:
			sum += i + (value / i)
	return sum > value

		
def main():
	abundant = []
	possible_sums = set()
	#all integers greater than 28123 can be written as the sum of two abundant numbers
	for i in range(12,28124):
		if is_abundant(i):
			abundant.append(i)
	for i in abundant:
		for j in abundant:
			if i + j < 28124: 
				possible_sums.add(i+j)
	values = set(range(28124))
	result = values.difference(possible_sums)	
	print(sum(result))
 
if __name__ == '__main__':
	main()
