#Find the largest palindrome made from the product of two 3-digit numbers.


def palindrome(num):
	return str(num) == str(num)[::-1]

def multiply():
	largest_pal = None
	for num1 in range(100,1000):
		for num2 in range(100,1000):
			if(palindrome(str(num1*num2))):
				largest_pal=max(largest_pal,num1*num2)
	return largest_pal

print(multiply())


