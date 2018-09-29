#Evaluate the sum of all the amicable numbers under 10000.

from math import sqrt

def sum_divisors(value):
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
	if sum == 1:
		return None
	return sum

def main():
	sum = 0
	divisors = {}
	value = None
	for i in range(10000):
		divisors[i] = sum_divisors(i)
		value = divisors[i]
    		if value != None and i > value and divisors[value] == i:
            		sum += value + i
    	print sum
 
if __name__ == '__main__':
	main()
