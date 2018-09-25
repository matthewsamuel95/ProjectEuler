#There exists exactly one Pythagorean triplet for which a + b + c = 1000.
#Find the product abc.

def find_triplet(value):
	for a in range(1,value-2):
    		for b in range(1,(value-1)-a):
    			c = value - a - b
    			if a*a + b*b == c*c:
            			print a*b*c 
            			return

if __name__ == '__main__':
	find_triplet(1000)
