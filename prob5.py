#What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?


from fractions import gcd

def lcm(num1,num2):
    return num1 * num2 // gcd(num1,num2)

def find_smallest():
	res = 1
	for i in range(1,21):
		res = lcm(res,i)
	return res

print(find_smallest())